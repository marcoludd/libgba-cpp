#ifndef RESOURCES_SAMPLE_TILES_H
#define RESOURCES_SAMPLE_TILES_H

#include <array>

#include <libgba-cpp/arch/display/tilemap.h>
#include <libgba-cpp/arch/display/video.h>

namespace resources::maps {

using gba::display::Color;
using gba::display::map::Tile;

static std::array<Color, 7> sample_palette = {
    Color{0x1f, 0x00, 0x00},
    Color{0x00, 0x1f, 0x00},
    Color{0x00, 0x00, 0x17},
    Color{0x1f, 0x1f, 0x00},
    Color{0x00, 0x1f, 0x17},
    Color{0x1f, 0x00, 0x17},
    Color{0x1f, 0x1f, 0x1f},
};

static std::array<Tile, 11> sample_tiles = {
    Tile{{0x33333333,
      0x33333333,
      0x33333333,
      0x33333333,
      0x33333333,
      0x33333333,
      0x33333333,
      0x33333333}},

    Tile{{0x11111111,
      0x12222222,
      0x12111111,
      0x12111111,
      0x12111111,
      0x12111111,
      0x12111122,
      0x12111121}},

    Tile{{0x11111111,
      0x22222222,
      0x11111111,
      0x11111111,
      0x11111111,
      0x11111111,
      0x22222222,
      0x11111111}},

    Tile{{0x11111111,
      0x22222221,
      0x11111121,
      0x11111121,
      0x11111121,
      0x11111121,
      0x22111121,
      0x12111121}},

    Tile{{0x12111121,
      0x12111122,
      0x12111111,
      0x12111111,
      0x12111111,
      0x12111111,
      0x12222222,
      0x11111111}},

    Tile{{0x12111121,
      0x22111121,
      0x11111121,
      0x11111121,
      0x11111121,
      0x11111121,
      0x22222221,
      0x11111111}},

    Tile{{0x12111121,
      0x12111121,
      0x12111121,
      0x12111121,
      0x12111121,
      0x12111121,
      0x12111121,
      0x12111121}},

    Tile{{0x00044000,
      0x04444440,
      0x00044444,
      0x00000444,
      0x00044444,
      0x04444440,
      0x00044000,
      0x00000000}},

    Tile{{0x00000000,
      0x00000000,
      0x00077000,
      0x00777700,
      0x00777700,
      0x00077000,
      0x00000000,
      0x00000000}},

    Tile{{0x07654321,
      0x01234567,
      0x02644321,
      0x17660321,
      0x21234567,
      0x64637254,
      0x51734642,
      0x62346177}},
};

}

#endif
