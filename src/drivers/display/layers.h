#ifndef GBA_DRIVERS_DISPLAY_LAYERS_H
#define GBA_DRIVERS_DISPLAY_LAYERS_H

#include <array>

#include "control.h"
#include "video.h"
#include "../architecture/registers.h"


namespace gba::display {

/**
 * A map layer.
 */
enum class Layer {
    BG0,
    BG1,
    BG2,
    BG3,
    OBJ,
};

/**
 * Backgroud priority. `HIGHEST` means the layer will be above all others.
 */
enum class BGPriority {
    HIGHEST = 0,
    HIGH,
    LOW,
    LOWEST,
};

/**
 * Color palette mode.
 */
enum class PaletteMode {
    /**
     * 16 palettes with 16 colors each.
     */
    PALETTE_16,
    /**
     * 1 palette with 256 colors.
     */
    PALETTE_256,
};

/**
 * Map overflow behaviour.
 */
enum class Overflow {
    /**
     * Hides map overflow area.
     */
    TRANSPARENT = 0,
    /**
     * Wraps overflowed map area trough screen.
     */
    WRAPAROUND,
};

/**
 * Screen size (in pixels).
 */
enum class ScreenSize {
    /**
     * 256x256 map (in Text Mode).
     */
    TEXT_256X256 = 0,
    /**
     * 512x256 map (in Text Mode).
     */
    TEXT_512X256,
    /**
     * 256x512 map (in Text Mode).
     */
    TEXT_256X512,
    /**
     * 512x512 map (in Text Mode).
     */
    TEXT_512X512,

    /**
     * 128x128 map (in Rotation/Scaling Mode).
     */
    ROTSCAL_128X128 = 0,
    /**
     * 256x256 map (in Rotation/Scaling Mode).
     */
    ROTSCAL_256X256,
    /**
     * 512x512 map (in Rotation/Scaling Mode).
     */
    ROTSCAL_512X512,
    /**
     * 1024x1024 map (in Rotation/Scaling Mode).
     */
    ROTSCAL_1024X1024,
};

/**
 * Controls properties of a background.
 */
class BackgroundControl {
public:
    /**
     * Changes background priority.
     */
    void priority(gba::display::BGPriority value) {
        data = (data & (~0b11u)) | utils::value_of(value);
    }

    /**
     * Changes background's character block base index.
     */
    void char_base_block(unsigned base) {
        data = (data & (~0b1100u)) | ((base & 0b11u) << 2);
    }

    /**
     * Enables mosaic effect for background.
     */
    void mosaic(bool flag) {
        data = (data & ~0b100000) | (flag << 6);
    }

    /**
     * Changes background's palette mode.
     *
     * @param mode New palette mode.
     *
     * @see PaletteMode
     */
    void palette_mode(gba::display::PaletteMode mode) {
        data = (data & ~0b1000000) | (utils::value_of(mode) << 7);
    }

    /**
     * Changes background's screen block base index.
     */
    void screen_base_block(unsigned base) {
        data = (data & (~0x1fu << 8)) | ((base & 0x1f) << 8);
    }

    /**
     * Changes background's overflow method.
     *
     * @param method New overflow method.
     *
     * @see Overflow
     */
    void overflow(gba::display::Overflow method) {
        data = (data & ~(0b1u << 13)) | (utils::value_of(method) << 13);
    }

    /**
     * Changes background's size (in pixels).
     *
     * @param size_ New background size.
     *
     * @see ScreenSize
     */
    void size(gba::display::ScreenSize size_) {
        data = (data & (~(0b11u << 14))) | utils::value_of(size_);
    }

private:
    uint16_t data;
};

/**
 * Changes background X offset.
 */
inline auto& bg_ox(Layer layer) {
    return *(reinterpret_cast<uint16_t*>(0x0400'0010) + 2 * utils::value_of(layer));
}


/**
 * Changes background Y offset.
 */
inline auto& bg_oy(Layer layer) {
    return *(reinterpret_cast<uint16_t*>(0x0400'0012) + 2 * utils::value_of(layer));
}

/**
 * Shows/hide layer.
 */
inline void layer_visible(Layer layer, bool visible=true) {
    auto& lcd_control = gba::architecture::registers::display::lcd_control;
    lcd_control[8 + utils::value_of(layer)] = visible;
}

}

#endif
