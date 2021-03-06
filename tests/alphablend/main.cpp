#include <libgba-cpp/arch/display/layers.h>
#include <libgba-cpp/arch/display/effects.h>

#include "sample_tiles.h"
#include "sample_map.h"

using namespace gba::display;
using namespace gba::display::map;

using namespace resources::maps;
using namespace test;

void copy_palette() {
    for (auto i = 0u; i < sample_palette.size(); ++i) {
        bg_palette()[i + 1] = sample_palette[i];
    }
}

void copy_tiles() {
    for (auto i = 0u; i < sample_tiles.size(); ++i) {
        tileset()[i + 1] = sample_tiles[i];
    }
}

void gen_map() {
    for (auto i = 0u; i < layer0.size(); ++i) {
        auto x = i % 8;
        auto y = i / 8;
        tilemap()[x + 32 * y] = layer0[i];
    }

    for (auto i = 0u; i < layer1.size(); ++i) {
        tilemap()[i + 3 + 32 * 3 + 0x400] = layer1[i];
    }

    for (auto i = 0; i < 9; ++i) {
        tilemap()[(i % 3) + 3 + 32 * (3 + i / 3) + 0x800] = 0xb;
    }

    for (auto i = 0; i < 9; ++i) {
        tilemap()[(i % 3) + 5 + 32 * (5 + i / 3) + 0xC00] = 0xb;
    }
}

int main() {
    layer_visible(Layer::BG0);
    layer_visible(Layer::BG1);
    layer_visible(Layer::BG2);
    layer_visible(Layer::BG3);

    bg_control(Layer::BG0).screen_base_block(1);
    bg_control(Layer::BG1).screen_base_block(2);
    bg_control(Layer::BG2).screen_base_block(3);
    bg_control(Layer::BG3).screen_base_block(4);

    bg_control(Layer::BG0).priority(BGPriority::LOWEST);
    bg_control(Layer::BG1).priority(BGPriority::LOW);
    bg_control(Layer::BG2).priority(BGPriority::HIGH);
    bg_control(Layer::BG3).priority(BGPriority::HIGHEST);

    set_first_target(Layer::BG3);
    set_first_target(Layer::BG2);
    set_first_target(Layer::BG1);
    set_second_target(Layer::BG2);
    set_second_target(Layer::BG1);
    set_second_target(Layer::BG0);
    select(SpecialEffect::ALPHA_BLEND);

    copy_palette();
    copy_tiles();

    gen_map();

    bg_oy(Layer::BG0) = -8;
    bg_oy(Layer::BG1) = -16;

    blend_first_target_strength() = 8;
    blend_second_target_strength() = 4;

    auto i = 0;

    while (true) {
        vsync();

        bg_ox(Layer::BG1) = -i;

        ++i;
    }
}

