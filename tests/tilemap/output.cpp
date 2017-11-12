#include "output.h"

const std::array<gba::graphics::Tile, 128> resources::maps::sample_tiles = {
    Tile
    {{
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
        0x00000000, 0x00000000,
    }},
    {{
        0x1111110c, 0x11111611,
        0xc16161f, 0x1f111116,
        0x1616161f, 0x161f1f1f,
        0x2c1f2c2c, 0x2c2c1f16,
        0x2c1f2f2f, 0x1f2c1f2f,
        0x2c2f2c1f, 0x2f1f1f2c,
        0x2c1f1f2c, 0x1f1f2f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0x80c1116, 0x11111108,
        0x1616161f, 0x80c110c,
        0x16111f2c, 0xc0c1616,
        0x1f162c2c, 0xc11161f,
        0x2f2c2c2c, 0xc11111f,
        0x160c2c2c, 0x16161f2c,
        0x1f2f2f1f, 0x81f111f,
        0x2c162f2c, 0x161f1f2c,
    }},
    {{
        0x2727271f, 0x1a1f1a1a,
        0x1f272727, 0x1f1a1a1f,
        0x1a272727, 0x1f08111f,
        0x1f272727, 0x16081616,
        0x111f1a27, 0xc110c1f,
        0x1f111a1f, 0x1f160c1f,
        0x1f111627, 0x1a0c1f0c,
        0x816111f, 0x11161611,
    }},
    {{
        0x1a1a271a, 0x27271f27,
        0x1a1a160c, 0x16161a27,
        0x11111111, 0x110c161a,
        0x110c111f, 0x160c080c,
        0x8110c11, 0x1f111611,
        0xc0c0c0c, 0x8161111,
        0x16160c1f, 0xc111608,
        0x8110c11, 0x80c110c,
    }},
    {{
        0x271f1f1f, 0x1a272727,
        0x27271f16, 0x271f1a27,
        0x1f1f161f, 0x27271a1a,
        0x11110c0c, 0x1a271f16,
        0x16110811, 0x271f1a11,
        0x1f081111, 0x27271f08,
        0x11161611, 0x271f0c16,
        0x8111608, 0x1a161f16,
    }},
    {{
        0x1f2f2c2c, 0x2c2c2f16,
        0x161f2c16, 0x1f2f1f1f,
        0x2f1f162c, 0x162c2f2c,
        0x2c1f2c1f, 0x2f2c2c11,
        0x2c1f2f2f, 0x1f1f1f2f,
        0x2c2f2c1f, 0x2f1f1f2c,
        0x2c1f1f1f, 0x1f1f2f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0x2c2f2c16, 0x2c2c2f2c,
        0x16161f2f, 0x112c2c2c,
        0x2f1f2c2c, 0x2f2c1f16,
        0x2c2c1f11, 0x2f2c1f1f,
        0x2c1f2c2c, 0x1f2f2c1f,
        0x16162c2c, 0x2c2c162c,
        0x2f2c2f16, 0x1f2c2f2c,
        0x2c2c2f2c, 0x161f2c2c,
    }},
    {{
        0xc110c0c, 0xc110c0c,
        0xc0c1116, 0x16111616,
        0x16111116, 0xc161111,
        0x1616110c, 0x110c080c,
        0x110c080c, 0x11080c11,
        0xc0c1111, 0x1616110c,
        0x160c0c11, 0xc081111,
        0x11110c11, 0x11110c16,
    }},
    {{
        0x11161108, 0x11111611,
        0x8080c16, 0xc111111,
        0x160c1111, 0x16110c08,
        0x11110c0c, 0x16110c0c,
        0x110c1111, 0xc16110c,
        0x8081111, 0x11110811,
        0x16111608, 0xc111611,
        0x11111611, 0x80c1111,
    }},
    {{
        0x1a272727, 0x27272727,
        0x1a272727, 0x27272727,
        0x27272727, 0x2727271f,
        0x27271a27, 0x27271a1f,
        0x1a271f27, 0x27272727,
        0x27272727, 0x27272727,
        0x271a271f, 0x27272727,
        0x271f1f27, 0x27271a27,
    }},
    {{
        0x271a2727, 0x27272727,
        0x27271f1a, 0x27272727,
        0x2727271a, 0x2727271f,
        0x27272727, 0x27272727,
        0x271f2727, 0x1a272727,
        0x1a272727, 0x1a272727,
        0x271a2727, 0x271a2727,
        0x27271a27, 0x27271a27,
    }},
    {{
        0x30303030, 0x1c282e2e,
        0x30303030, 0x1e281e13,
        0x30303030, 0x281e1c1c,
        0x29292930, 0x281e1328,
        0x7232329, 0x1e2a1e1c,
        0x29293329, 0x282a281c,
        0x25303029, 0x1b2a2813,
        0x19302529, 0x240e2a13,
    }},
    {{
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x29292930, 0x29292930,
        0x7232329, 0x29192319,
        0x29293329, 0x30292929,
        0x25303029, 0x30332329,
        0x19302529, 0x30291923,
    }},
    {{
        0xc110c0c, 0x11110c0c,
        0xc0c1116, 0x16111116,
        0x11111116, 0x1f1f1f16,
        0x1111110c, 0x161f1f11,
        0x160c0811, 0x2c1f1f2c,
        0x1f1f1611, 0x2f2f1f1f,
        0x161f0c11, 0x1f162c1f,
        0x2c2c1611, 0x2c2c1f1f,
    }},
    {{
        0x122a1e13, 0x30303030,
        0x1e1c1e1e, 0x30303030,
        0x1e281328, 0x30303030,
        0x1c282813, 0x29292930,
        0x1c281e2a, 0x29192319,
        0x282a2a1c, 0x30292929,
        0x282a121c, 0x30332329,
        0x241b2424, 0x30291923,
    }},
    {{
        0x2c2c1f11, 0x2c2f2c2c,
        0x2c1f1f11, 0x2f2c2f2c,
        0x1f1f1616, 0x2c2c1f2f,
        0x2c111611, 0x161f2c2c,
        0x2c2c1611, 0x2c2c2f2c,
        0x2c1f110c, 0x1f2f1f2c,
        0x2c1f1111, 0x162c2f2f,
        0x1f1f110c, 0x2f2c2c2c,
    }},
    {{
        0x1f2f2c2c, 0x82c2f16,
        0x160c2c16, 0x112f1f1f,
        0x2f1f0c2c, 0x162c0c16,
        0x1608161f, 0x2f162c1f,
        0x160c2f2f, 0x1f161616,
        0x162f2c0c, 0x2f161f1f,
        0x2c1f0c1f, 0x1f082f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0x1f2c1f16, 0x162c2c1f,
        0x1f2f2f1f, 0x16162c2c,
        0x2f2c1f2f, 0x111f2c2c,
        0x2c2f2c16, 0x1116162f,
        0x2c2f1f2f, 0x111f2c2f,
        0x2c2f2f2c, 0x111f2c16,
        0x2c1f2f1f, 0x16162c2f,
        0x1f2f2c2c, 0x1116161f,
    }},
    {{
        0x11161627, 0x11111f16,
        0x111f1a27, 0x1611160c,
        0xc111a27, 0x8161116,
        0xc161a1a, 0x110c1111,
        0x11111a27, 0x8161611,
        0x16111a27, 0x80c1611,
        0x11161f27, 0x1116110c,
        0x1f161f1a, 0x110c1116,
    }},
    {{
        0x1111020c, 0x110c1111,
        0x1103080c, 0x3110211,
        0x160c1611, 0x8030808,
        0x2160803, 0x1f0c1611,
        0x8160c11, 0xc161f16,
        0x16081102, 0x8021102,
        0x160c0308, 0x16080c08,
        0x8030c16, 0x11160c16,
    }},
    {{
        0x16161116, 0x1f161f16,
        0x11111116, 0x2716160c,
        0xc160808, 0x271f1f11,
        0x16080c16, 0x271a111f,
        0x16161616, 0x271a1616,
        0xc111608, 0x1f1f1f16,
        0x1116160c, 0x1a111616,
        0xc11110c, 0x161f1f16,
    }},
    {{
        0x2c2f2c16, 0x2c2c2f2c,
        0x16161f2f, 0x112c2c2c,
        0x2f1f2c2c, 0x2f2c1f16,
        0x2c2c1f11, 0x2f2c1f1f,
        0x2c1f2c2c, 0x1f2f2c1f,
        0x16162c2c, 0x2c2c162c,
        0x2f2c2f16, 0x1f2c2f2c,
        0x2c2c2f2c, 0x161f2c2c,
    }},
    {{
        0x1f2f2c2c, 0x2c2c2f16,
        0x161f2c16, 0x1f2f1f1f,
        0x2f1f162c, 0x162c2f2c,
        0x2c1f2c1f, 0x2f2c2c11,
        0x2c1f2f2f, 0x1f1f1f2f,
        0x2c2f2c1f, 0x2f1f1f2c,
        0x2c1f1f1f, 0x1f1f2f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0xc111111, 0x11160c11,
        0xc161111, 0x16111611,
        0x11110c16, 0x11110c16,
        0x11111611, 0x80c1111,
        0x110c1616, 0x11111608,
        0x1116110c, 0xc160c0c,
        0x110c0c0c, 0x8111611,
        0x16111111, 0x16111111,
    }},
    {{
        0xc161111, 0x11111608,
        0x80c1108, 0xc160c0c,
        0x160c0811, 0x8111611,
        0x110c110c, 0x1611110c,
        0x110c1616, 0xc0c0c16,
        0x1116110c, 0x160c0c11,
        0x110c0c0c, 0xc0c160c,
        0x16111111, 0x11081608,
    }},
    {{
        0x271a2727, 0x27272727,
        0x27271f1a, 0x27272727,
        0x2727271a, 0x2727271f,
        0x27272727, 0x27272727,
        0x271f2727, 0x1a272727,
        0x1a272727, 0x1a272727,
        0x271a2727, 0x271a2727,
        0x27271a27, 0x27271a27,
    }},
    {{
        0x1a272727, 0x27272727,
        0x1a272727, 0x27272727,
        0x27272727, 0x2727271f,
        0x27271a27, 0x27271a1f,
        0x1a271f27, 0x27272727,
        0x27272727, 0x27272727,
        0x271a271f, 0x27272727,
        0x271f1f27, 0x27271a27,
    }},
    {{
        0x18302329, 0x30303030,
        0x25302529, 0x30303030,
        0x19302329, 0x30303030,
        0x19301929, 0x29252930,
        0xf302329, 0x30303030,
        0x19301729, 0x23232530,
        0xf301729, 0x19011930,
        0x19301929, 0x23191929,
    }},
    {{
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x29292930, 0x29292930,
        0x30303030, 0x30303030,
        0x23303023, 0x25232929,
        0x19231917, 0x17191919,
        0x19181817, 0x9091919,
    }},
    {{
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x30303030, 0x30303030,
        0x29292930, 0x29292930,
        0x30303030, 0x30303030,
        0x2923290d, 0x29292923,
        0x19191907, 0x2923290f,
        0x190f0f09, 0x290f2319,
    }},
    {{
        0x30303030, 0x30230f0f,
        0x30303030, 0x30252525,
        0x30303030, 0x30252323,
        0x29292930, 0x30232323,
        0x30303030, 0x30230909,
        0x29232323, 0x30232323,
        0x23190719, 0x30231919,
        0x230d1919, 0x30232323,
    }},
    {{
        0x1f1f1f16, 0x1f2c162c,
        0x2c1f1f11, 0x2c2c2c0c,
        0x11160c16, 0x2f2c1f16,
        0x16160c16, 0x2f1f1f16,
        0x1f110c08, 0x2c2c161f,
        0x1616110c, 0x2c161616,
        0xc08110c, 0x1f161611,
        0x16160c11, 0x1111110c,
    }},
    {{
        0x2f1f1f2c, 0x2f1f1f2f,
        0x1f161f2c, 0x1f2c2c2c,
        0x2c2f2c2c, 0x2c162c16,
        0x2c2c1f2f, 0x161f2f16,
        0x2c1f162c, 0x161f2c1f,
        0x2c2c1f2c, 0x1f1f1616,
        0x16161f16, 0x111f1116,
        0x110c1616, 0x16161611,
    }},
    {{
        0x2c1f2c2c, 0x1f2c112c,
        0x1f2c162c, 0x162c2c1f,
        0x2c1f162f, 0x11161f11,
        0x1f2c1f2f, 0x11161f1f,
        0x1f1f1f1f, 0x11161611,
        0x161f2c1f, 0x16161111,
        0x111f161f, 0x16110c11,
        0xc111116, 0x11111108,
    }},
    {{
        0x1111161f, 0x16111611,
        0x111f1f1a, 0x81f0816,
        0x111a2727, 0x11111108,
        0x161a2727, 0x80c1f11,
        0x111a1a27, 0x111f1111,
        0x161f2727, 0x16161a11,
        0x27271a27, 0x111f1f27,
        0x2727271a, 0x1f272727,
    }},
    {{
        0xc161116, 0xc110c11,
        0x16160816, 0x11111116,
        0x160c0c11, 0x11111111,
        0x811080c, 0xc080c08,
        0xc0c1111, 0x1116110c,
        0x16160808, 0x11080c11,
        0xc0c0c16, 0x8110c1a,
        0x27271a11, 0x271a1a1a,
    }},
    {{
        0x1a111116, 0x111f1616,
        0x1a0c1611, 0x1a11110c,
        0x1f161108, 0x16161f11,
        0xc1f1608, 0x27271f1f,
        0x160c160c, 0x27271a1f,
        0x1f0c1108, 0x271a1a1a,
        0x1a111f0c, 0x271f1f1a,
        0x1a1f1f1f, 0x27271f27,
    }},
    {{
        0x1f2f2c2c, 0x2c2c2f16,
        0x161f2c16, 0x1f2f1f1f,
        0x2f1f162c, 0x162c2f2c,
        0x2c1f2c1f, 0x2f2c2c11,
        0x2c1f2f2f, 0x1f2f2c2c,
        0x2c2f2c1f, 0x160c2c16,
        0x2c1f1f1f, 0x2f1f0c2c,
        0x2f2c2c2c, 0x1608161f,
    }},
    {{
        0x2c2f2c16, 0x2c2c2f2c,
        0x16161f2f, 0x112c2c2c,
        0x2f1f2c2c, 0x2f2c1f16,
        0x2c2c1f11, 0x2f2c1f1f,
        0x82c2f16, 0x1f2f2c1f,
        0x112f1f1f, 0x2c2c162c,
        0x162c0c16, 0x1f2c2f2c,
        0x2f162c1f, 0x161f2c2c,
    }},
    {{
        0xc110c0c, 0xc110c0c,
        0xc0c1116, 0x16111616,
        0x16111116, 0xc161111,
        0x1616110c, 0x110c080c,
        0x110c080c, 0x1111020c,
        0xc0c1111, 0x1103080c,
        0x160c0c11, 0x160c1611,
        0x11110c11, 0x2160803,
    }},
    {{
        0x11161108, 0x11111611,
        0x8080c16, 0xc111111,
        0x160c1111, 0x16110c08,
        0x11110c0c, 0x16110c0c,
        0x110c1111, 0xc16110c,
        0x3110211, 0x11110811,
        0x8030808, 0xc111611,
        0x1f0c1611, 0x80c1111,
    }},
    {{
        0xc110c0c, 0x8160c11,
        0xc0c1116, 0x16081102,
        0x16111116, 0x160c0308,
        0x1616110c, 0x8030c16,
        0x110c1111, 0x1111020c,
        0x3110211, 0x1103080c,
        0x8030808, 0x160c1611,
        0x1f0c1611, 0x2160803,
    }},
    {{
        0xc161f16, 0x11111611,
        0x8021102, 0xc111111,
        0x16080c08, 0x16110c08,
        0x11160c16, 0x16110c0c,
        0x110c1111, 0x1111020c,
        0x3110211, 0x1103080c,
        0x8030808, 0x160c1611,
        0x1f0c1611, 0x2160803,
    }},
    {{
        0xf302329, 0x7232329,
        0x19301729, 0x29293329,
        0xf301729, 0x25303029,
        0x19301929, 0x19302529,
        0xf302329, 0x18302329,
        0x19301729, 0x25302529,
        0xf301729, 0x19302329,
        0x19301929, 0x19301929,
    }},
    {{
        0xf302329, 0xf302329,
        0x19301729, 0x19301729,
        0xf301729, 0xf301729,
        0x19301929, 0x19301929,
        0xf302329, 0x18302329,
        0x19301729, 0x25302529,
        0xf301729, 0x19302329,
        0x19301929, 0x19301929,
    }},
    {{
        0x30230909, 0x30230909,
        0x30232323, 0x30232323,
        0x30231919, 0x30231919,
        0x30232323, 0x30232323,
        0x30230909, 0x30230909,
        0x30232323, 0x30232323,
        0x30231919, 0x30231919,
        0x30232323, 0x30232323,
    }},
    {{
        0x29192319, 0x30230909,
        0x30292929, 0x30232323,
        0x30332329, 0x30231919,
        0x30291923, 0x30232323,
        0x30230f0f, 0x30230f0f,
        0x30252525, 0x30252525,
        0x30252323, 0x30252323,
        0x30232323, 0x30232323,
    }},
    {{
        0x1f2f2c2c, 0x1111020c,
        0x160c2c16, 0x1103080c,
        0x2f1f0c2c, 0x160c1611,
        0x1608161f, 0x2160803,
        0x160c2f2f, 0x8160c11,
        0x162f2c0c, 0x16081102,
        0x2c1f0c1f, 0x160c0308,
        0x2f2c2c2c, 0x8030c16,
    }},
    {{
        0x1f2f2c2c, 0x82c2f16,
        0x160c2c16, 0x112f1f1f,
        0x2f1f0c2c, 0x162c0c16,
        0x1608161f, 0x2f162c1f,
        0x8160c11, 0xc161f16,
        0x16081102, 0x8021102,
        0x160c0308, 0x16080c08,
        0x8030c16, 0x11160c16,
    }},
    {{
        0x1111020c, 0x110c1111,
        0x1103080c, 0x3110211,
        0x160c1611, 0x8030808,
        0x2160803, 0x1f0c1611,
        0x160c2f2f, 0x1f161616,
        0x162f2c0c, 0x2f161f1f,
        0x2c1f0c1f, 0x1f082f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0x110c1111, 0x82c2f16,
        0x3110211, 0x112f1f1f,
        0x8030808, 0x162c0c16,
        0x1f0c1611, 0x2f162c1f,
        0xc161f16, 0x1f161616,
        0x8021102, 0x2f161f1f,
        0x16080c08, 0x1f082f1f,
        0x11160c16, 0x2c162f16,
    }},
    {{
        0x11160c11, 0xc161111,
        0x11111611, 0x1f0a0a16,
        0x161f0c16, 0x150a0a0a,
        0xc0c1111, 0x11161f1f,
        0x1f0c160c, 0x1111110c,
        0xa0a0a16, 0x11110c08,
        0x80a151f, 0x110c1111,
        0x1116160c, 0x16111108,
    }},
    {{
        0x11160c11, 0xc161111,
        0x15160816, 0x110c160a,
        0x4151611, 0x11160404,
        0x4151511, 0x1f040404,
        0xa151f08, 0x1f04040a,
        0x15151611, 0x1f151515,
        0x1f081616, 0x11081f1f,
        0x16110c11, 0x16111111,
    }},
    {{
        0x2c2f2c16, 0x160c2f2f,
        0x16161f2f, 0x162f2c0c,
        0x2f1f2c2c, 0x2c1f0c1f,
        0x2c2c1f11, 0x2f2c2c2c,
        0x2c1f2c2c, 0x1f2f2c1f,
        0x16162c2c, 0x2c2c162c,
        0x2f2c2f16, 0x1f2c2f2c,
        0x2c2c2f2c, 0x161f2c2c,
    }},
    {{
        0x1f161616, 0x2c2c2f16,
        0x2f161f1f, 0x1f2f1f1f,
        0x1f082f1f, 0x162c2f2c,
        0x2c162f16, 0x2f2c2c11,
        0x2c1f2f2f, 0x1f1f1f2f,
        0x2c2f2c1f, 0x2f1f1f2c,
        0x2c1f1f1f, 0x1f1f2f1f,
        0x2f2c2c2c, 0x2c162f16,
    }},
    {{
        0xc111111, 0x8160c11,
        0xc161111, 0x16081102,
        0x11110c16, 0x160c0308,
        0x11111611, 0x8030c16,
        0x110c1616, 0x11111608,
        0x1116110c, 0xc160c0c,
        0x110c0c0c, 0x8111611,
        0x16111111, 0x16111111,
    }},
    {{
        0xc161f16, 0x11111608,
        0x8021102, 0xc160c0c,
        0x16080c08, 0x8111611,
        0x11160c16, 0x1611110c,
        0x110c1616, 0xc0c0c16,
        0x1116110c, 0x160c0c11,
        0x110c0c0c, 0xc0c160c,
        0x16111111, 0x11081608,
    }},
    {{
        0xc161f16, 0x8160c11,
        0x8021102, 0x16081102,
        0x16080c08, 0x160c0308,
        0x11160c16, 0x8030c16,
        0x110c1616, 0x1111020c,
        0x1116110c, 0x1103080c,
        0x110c0c0c, 0x160c1611,
        0x16111111, 0x2160803,
    }},
    {{
        0xc161f16, 0x8160c11,
        0x8021102, 0x16081102,
        0x16080c08, 0x160c0308,
        0x11160c16, 0x8030c16,
        0x110c1111, 0xc0c0c16,
        0x3110211, 0x160c0c11,
        0x8030808, 0xc0c160c,
        0x1f0c1611, 0x11081608,
    }},
    {{
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x12242222,
        0x22222222, 0x24312222,
    }},
    {{
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222224, 0x22222222,
        0xe1b1212, 0x22222222,
        0xe050e05, 0x2222051b,
        0x32241b31, 0x22222412,
    }},
    {{
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x24222222,
        0x22222222, 0x52e0e2a,
        0x5312222, 0x52a0e1b,
        0x1b312222, 0x312a2431,
    }},
    {{
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222231, 0x22222222,
        0x22222231, 0x22222222,
        0x22313105, 0x22222222,
        0x2231242a, 0x22222222,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x262b2b2b,
        0x2b2b2b2b, 0x20262b2b,
        0x2b2b2b26, 0x202b2b2b,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b262b,
        0x2b2b2b2b, 0x2b2b262b,
        0x2b2b2626, 0x2b2b2626,
        0x2b2b2620, 0x2b202626,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2626262b, 0x2b2b2b2b,
        0x20202626, 0x2b2b2b2b,
    }},
    {{
        0x2b2b2b2b, 0x2b26262b,
        0x2b2b2b2b, 0x2620262b,
        0x262b2b2b, 0x2620202b,
        0x2626262b, 0x201d2b26,
        0x1d262b2b, 0x14202b20,
        0x262b2b2b, 0x262b2010,
        0x2b2b2b2b, 0x2b261d20,
        0x2b2b2b2b, 0x261d1420,
    }},
    {{
        0x2b2b2b2b, 0x2b262626,
        0x262b2b2b, 0x2b2b2020,
        0x20262b2b, 0x2b2b201d,
        0x20262620, 0x2b2b2614,
        0x1d26201d, 0x2b2b2620,
        0x20201410, 0x2b2b2b20,
        0x1d1d1026, 0x2b2b2b26,
        0x201d202b, 0x2b2b2b26,
    }},
    {{
        0x2626262b, 0x2b2b2b2b,
        0x1d262b2b, 0x2b2b2620,
        0x1d262b2b, 0x2b2b261d,
        0x202b2b2b, 0x2626201d,
        0x262b2b2b, 0x1d262014,
        0x262b2b2b, 0x101d201d,
        0x262b2b2b, 0x20141420,
        0x262b2b2b, 0x26142020,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b20262b, 0x2b2b2b2b,
        0x2b1d2026, 0x2b2b2b2b,
        0x2b101d20, 0x2b262626,
        0x2626101d, 0x2b2b2020,
        0x1d262620, 0x2b2b2b10,
        0x1420262b, 0x2b2b2b26,
        0xb1d202b, 0x2b2b2b26,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b26, 0x2626262b,
        0x2b262626, 0x26202020,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b262b2b, 0x2b2b2b2b,
        0x26202b2b, 0x2b2b2b2b,
        0x26202b2b, 0x262b2b2b,
        0x26202b26, 0x26262b2b,
    }},
    {{
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2b2b, 0x2b2b2b2b,
        0x2b2b2626, 0x2b2b2b2b,
        0x2b2b2020, 0x262b2b2b,
        0x2b2b2620, 0x262b2b2b,
    }},
    {{
        0xc110c0c, 0xc110c0c,
        0xc0c1116, 0x16111616,
        0x16111116, 0xc161111,
        0x1616110c, 0x110c080c,
        0x110c080c, 0xc031111,
        0xc0c1111, 0xc161102,
        0x160c0c11, 0x1121111f,
        0x11110c11, 0xc081116,
    }},
    {{
        0x11161108, 0x11111611,
        0x8080c16, 0xc111111,
        0x160c1111, 0x16110c08,
        0x11110c0c, 0x16110c0c,
        0x11110808, 0xc16110c,
        0x3112108, 0x11110811,
        0xc110803, 0xc111611,
        0x8110316, 0x80c1111,
    }},
    {{
        0x22222222, 0x51b2434,
        0x341b2222, 0xe052424,
        0xe2e3122, 0x312e0e32,
        0x2a323134, 0x34052434,
        0x52a3222, 0x2e050e1b,
        0x2e1b1222, 0x1b0e0512,
        0x2e0e1222, 0x50e312a,
        0xe2e0531, 0xe122412,
    }},
    {{
        0x1b1b311b, 0x22240512,
        0x50e1b32, 0x320e1234,
        0xe34051b, 0x320e342a,
        0x32320524, 0xe2a1b31,
        0x1b05321b, 0x2405051b,
        0x1b2a0e2e, 0x342e3231,
        0x2e053131, 0x3412241b,
        0xe31321b, 0x22050e05,
    }},
    {{
        0x12122222, 0x2e2e0e2e,
        0x31310e22, 0x2424050e,
        0x31310522, 0xe123205,
        0x241b311b, 0x12243432,
        0xe1b0e22, 0x31050e24,
        0x242e342a, 0xe2a2a31,
        0x24240522, 0x321b0e12,
        0x1b123122, 0x32122e0e,
    }},
    {{
        0x24310e05, 0x2222220e,
        0x2432051b, 0x22313124,
        0x341b3131, 0x3132341b,
        0x340e2434, 0x322a2e31,
        0x1b1b0532, 0x22122e0e,
        0x1b051231, 0x31242a05,
        0x2e1b050e, 0x1b051b1b,
        0x1b2a0e05, 0x120e1b05,
    }},
    {{
        0x2b2b2626, 0x262b2b2b,
        0x2b2b2620, 0x262b2626,
        0x2b2b2020, 0x2b262626,
        0x26262020, 0x2620202b,
        0x26202020, 0x14262b2b,
        0x261d1d1d, 0x1d2b2b2b,
        0x261d1d1d, 0x262b2b2b,
        0x201d1d1d, 0x262b2b2b,
    }},
    {{
        0x26262020, 0x26202626,
        0x20201d14, 0x26202626,
        0x1d141026, 0x2026201d,
        0x100b2b26, 0x20261d14,
        0xb202620, 0x1d261d14,
        0x141d2014, 0x1d20261d,
        0x10141d0b, 0x1420261d,
        0xb101d0b, 0x14202614,
    }},
    {{
        0x2b261d20, 0x202b2b2b,
        0x2b2b201d, 0x20262626,
        0x2b2b261d, 0x20262026,
        0x2b2b2b1d, 0x20262026,
        0x262b2b20, 0x1d261d20,
        0x262b2b26, 0x1d261d20,
        0x262b2b26, 0x1420201d,
        0x262b2b2b, 0x141d261d,
    }},
    {{
        0x2b2b2b26, 0x20140b26,
        0x2b2b2b26, 0x20141d26,
        0x2b2b2b26, 0x1d101d2b,
        0x2b2b2b26, 0x140b202b,
        0x2b2b2b20, 0x100b202b,
        0x2b2b2b20, 0xb0b202b,
        0x2b2b2b20, 0x100b202b,
        0x2b2b2b1d, 0x100b202b,
    }},
    {{
        0x1d14202b, 0x2b2b2b20,
        0x14101d26, 0x2b2b2b20,
        0x140b1426, 0x2b2b2b20,
        0x140b1420, 0x262b2b20,
        0x14100b1d, 0x26262b26,
        0x140b0b14, 0x20262b26,
        0x1d101014, 0x1d262b26,
        0x140b061d, 0x1d262b26,
    }},
    {{
        0x262b2b2b, 0x261d1420,
        0x262b2b2b, 0x2014141d,
        0x262b2b2b, 0x2010101d,
        0x2b2b2b26, 0x1d0b101d,
        0x2b2b2b20, 0x1d0b141d,
        0x2b2b261d, 0x1d0b1420,
        0x2b2b201d, 0x140b1420,
        0x2b2b261d, 0x14061020,
    }},
    {{
        0x1d141d26, 0x2b2b2b2b,
        0x20101d20, 0x2b2b2b2b,
        0x26101420, 0x2b2b2b2b,
        0x2614101d, 0x2b2b2b2b,
        0x26100b14, 0x262b2b2b,
        0x260b0b10, 0x262b2b2b,
        0x26100b14, 0x262b2b2b,
        0x26140b14, 0x262b2b2b,
    }},
    {{
        0x2b262626, 0x2020262b,
        0x2b262626, 0x1d262b2b,
        0x26262020, 0x1d2b2b26,
        0x20202620, 0x262b2b26,
        0x20202020, 0x262b2b26,
        0x1d201d1d, 0x262b2b26,
        0x14261d1d, 0x2b2b2b20,
        0x1420141d, 0x2b2b2b20,
    }},
    {{
        0x26202b26, 0x2026262b,
        0x26262620, 0x1d1d2020,
        0x20262620, 0xb141d20,
        0x1020201d, 0x26261014,
        0x1d26201d, 0x20261d0b,
        0x20262014, 0x1d261d10,
        0x1d261d1d, 0x14201410,
        0x1d201420, 0x14261010,
    }},
    {{
        0x2b2b2b1d, 0x26262b2b,
        0x2b2b2b1d, 0x2626262b,
        0x2026262b, 0x2626262b,
        0x26202620, 0x2026262b,
        0x2b2b101d, 0x1d26202b,
        0x2b2b260b, 0x14202026,
        0x2b2b2b1d, 0x1d202026,
        0x2b2b2b1d, 0x14202026,
    }},
    {{
        0xc111111, 0x1108211f,
        0xc161111, 0x16160c0c,
        0x11110c16, 0x16210811,
        0x11111611, 0x16030c16,
        0x110c1616, 0x11111608,
        0x1116110c, 0xc160c0c,
        0x110c0c0c, 0x8111611,
        0x16111111, 0x16111111,
    }},
    {{
        0x11110c0c, 0x11111608,
        0x8210c11, 0xc160c0c,
        0x16020303, 0x8111611,
        0x8080c0c, 0x1611110c,
        0x110c1616, 0xc0c0c16,
        0x1116110c, 0x160c0c11,
        0x110c0c0c, 0xc0c160c,
        0x16111111, 0x11081608,
    }},
    {{
        0xe313131, 0x32320531,
        0x342e3122, 0x2a310531,
        0x24313431, 0x122e241b,
        0x34343122, 0x31122e34,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
    }},
    {{
        0x24342432, 0x340e3412,
        0x32243112, 0x3231240e,
        0x2412312e, 0x2a34242e,
        0x24323122, 0x31243124,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
    }},
    {{
        0x1b1b3122, 0x24322e24,
        0x2e1b2e32, 0x312e3212,
        0x1b2a3231, 0x342a2e24,
        0x31313222, 0x3124122a,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
    }},
    {{
        0x50e2e2e, 0x22120512,
        0x120e312e, 0x2a243434,
        0x34341b0e, 0x31322a0e,
        0x1232242e, 0x221b1b34,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
    }},
    {{
        0x20201d1d, 0x2b2b2b2b,
        0x1d261d1d, 0x2b2b2b2b,
        0x20202020, 0x2b2b2b26,
        0x261d2620, 0x2b2b261d,
        0x2b1d2026, 0x2b261d26,
        0x141d2626, 0x2b262b2b,
        0x26262b2b, 0x262d2b14,
        0x2b2b2b2b, 0x262b1d26,
    }},
    {{
        0x6101d10, 0x1d1d2014,
        0xb141d10, 0x20142010,
        0x6141d10, 0x20142014,
        0x61d140b, 0x26141d10,
        0x6201006, 0x2b1d1d10,
        0x6201006, 0x2b1d1d0b,
        0xb1d0b0b, 0x2b1d1d0b,
        0xb140b06, 0x2b1d1010,
    }},
    {{
        0x202b2b2b, 0x141d2614,
        0x202b2b2b, 0x1d142614,
        0x202b2b2b, 0x1d14201d,
        0x201d2b2b, 0x20142020,
        0x2b201d2b, 0x201d261d,
        0x2b2b2620, 0x1420261d,
        0x142b2b2b, 0x202b2620,
        0x1d262b2d, 0x262b2b26,
    }},
    {{
        0x2b2b2b1d, 0x100b202b,
        0x2b2b261d, 0x100b1d26,
        0x2b2b261d, 0x100b1426,
        0x2b2b2020, 0x100b1420,
        0x2b262026, 0x140b1d1d,
        0x202b262b, 0x1d0b1d14,
        0x262b2b26, 0x140b1420,
        0x1d2b2b1d, 0x14100b20,
    }},
    {{
        0x1410061d, 0x20262b2b,
        0x1d100614, 0x20262b2b,
        0x1d140614, 0x20201d2b,
        0x20140610, 0x26202026,
        0x201d0b10, 0x1d262626,
        0x1d1d0b0b, 0x20262b26,
        0x141d0b06, 0x2b202b20,
        0x14201006, 0x2b262b1d,
    }},
    {{
        0x2b2b201d, 0x14061420,
        0x2b26201d, 0x100b1420,
        0x2b1d261d, 0x60b1426,
        0x1d202626, 0x6101d26,
        0x2626261d, 0x6101d26,
        0x2b261d26, 0xb141d20,
        0x2626262b, 0x6141d1d,
        0x262b2b2d, 0xb14141d,
    }},
    {{
        0x26140b14, 0x262b2b2b,
        0x26140b1d, 0x202b2b2b,
        0x200b0b20, 0x202b2b2b,
        0x1d100b1d, 0x1d262b26,
        0x14101014, 0x261d2b26,
        0x20101014, 0x2b26261d,
        0x1d0b1010, 0x2b2b2b14,
        0x140b1010, 0x262b2620,
    }},
    {{
        0x1d201414, 0x2b2b261d,
        0x201d1420, 0x2b2b2620,
        0x201d1420, 0x2b2b2620,
        0x261d1d26, 0x2b262026,
        0x20201426, 0x26202626,
        0x20261d26, 0x26262b14,
        0x262b261d, 0x2b2b2b1d,
        0x262b2b20, 0x2d2b1420,
    }},
    {{
        0x1d201426, 0x14200b10,
        0x141d1d2b, 0x101d060b,
        0x141d1d2b, 0x14140606,
        0x141d202b, 0x10140b06,
        0x1414202b, 0xb140606,
        0x1014202b, 0xb100606,
        0x1014202b, 0x6100610,
        0x1014202b, 0x6101010,
    }},
    {{
        0x2b2b2b20, 0x14202626,
        0x2b2b2b20, 0x14202626,
        0x2b2b2b20, 0x1d26261d,
        0x262b2b20, 0x26202620,
        0x201d2b1d, 0x261d1426,
        0x2b262b20, 0x2620142b,
        0x142d2b1d, 0x2b26201d,
        0x20262d1d, 0x2d2b2626,
    }},
    {{
        0x1111020c, 0x8160c11,
        0x1103080c, 0x16081102,
        0x160c1611, 0x160c0308,
        0x2160803, 0x8030c16,
        0x110c1111, 0xc031111,
        0x3110211, 0xc161102,
        0x8030808, 0x1121111f,
        0x1f0c1611, 0xc081116,
    }},
    {{
        0xc161f16, 0x11110808,
        0x8021102, 0x3112108,
        0x16080c08, 0xc110803,
        0x11160c16, 0x8110316,
        0x110c1111, 0x11110c0c,
        0x3110211, 0x8210c11,
        0x8030808, 0x16020303,
        0x1f0c1611, 0x8080c0c,
    }},
    {{
        0x22222222, 0x22222222,
        0x22222222, 0x22222222,
        0x22222222, 0x12242222,
        0x22222222, 0x24312222,
        0x22222222, 0x51b2434,
        0x341b2222, 0xe052424,
        0xe2e3122, 0x312e0e32,
        0x2a323134, 0x34052434,
    }},
    {{
        0x22222224, 0x22222222,
        0xe1b1212, 0x22222222,
        0xe050e05, 0x2222051b,
        0x32241b31, 0x22222412,
        0x1b1b311b, 0x22240512,
        0x50e1b32, 0x320e1234,
        0xe34051b, 0x320e342a,
        0x32320524, 0xe2a1b31,
    }},
    {{
        0x22222222, 0x24222222,
        0x22222222, 0x52e0e2a,
        0x5312222, 0x52a0e1b,
        0x1b312222, 0x312a2431,
        0x12122222, 0x2e2e0e2e,
        0x31310e22, 0x2424050e,
        0x31310522, 0xe123205,
        0x241b311b, 0x12243432,
    }},
    {{
        0x22222231, 0x22222222,
        0x22222231, 0x22222222,
        0x22313105, 0x22222222,
        0x2231242a, 0x22222222,
        0x24310e05, 0x2222220e,
        0x2432051b, 0x22313124,
        0x341b3131, 0x3132341b,
        0x340e2434, 0x322a2e31,
    }},
    {{
        0x2b2b2d2d, 0x262b262b,
        0x2d2d2d2d, 0x202b2b2d,
        0x2d2d202d, 0x202d2d26,
        0x26262d2d, 0x1d2d262d,
        0x2d2d2d20, 0x14262d2d,
        0x2d202d2d, 0x1426202d,
        0x262d2d2d, 0x61d262d,
        0x2d2d2026, 0xb141426,
    }},
    {{
        0xb1d0b06, 0x261d1010,
        0xb141006, 0x261d1010,
        0xb061006, 0x261d0b14,
        0x1006140b, 0x201d0b14,
        0x10101410, 0x20140b1d,
        0x1010140b, 0x141d1020,
        0xb0b140b, 0x1420101d,
        0xb061d10, 0x20141020,
    }},
    {{
        0x261d2d2b, 0x2d2d2b2b,
        0x2d262b2b, 0x2b2d2d2b,
        0x2d2b2d2c, 0x14262d2c,
        0x2c2d2d20, 0x1d102d2d,
        0x2c2d2d26, 0x2620142d,
        0x2d2d2d20, 0x2b2b2626,
        0x2c20260b, 0x2b2b2d2d,
        0x2d2c1d14, 0x2d2c2d2c,
    }},
    {{
        0x2026262b, 0x1d100b20,
        0x20201d14, 0x1d101014,
        0xb202620, 0x201d1d0b,
        0x100b2626, 0x20201d0b,
        0x100b142b, 0x26261d1d,
        0x1410102d, 0x2b2b2620,
        0x20141426, 0x2b2d2b2b,
        0x2b262026, 0x2d262626,
    }},
    {{
        0x1420100b, 0x262b2614,
        0x14201006, 0x26261410,
        0x1d201006, 0x2b14101d,
        0x26141010, 0x1d141d20,
        0x26100614, 0x1d26262b,
        0x140b0b1d, 0x262b2d26,
        0xb101d26, 0x2b2b2d20,
        0x1020262d, 0x20202610,
    }},
    {{
        0x1d262b2d, 0x101d1d14,
        0x10262b2d, 0xb1d1d10,
        0x14101d26, 0xb142014,
        0x1d141020, 0xb102026,
        0x2b262020, 0xb0b1026,
        0x2b2b2b26, 0x100b1026,
        0x262d2d26, 0x20100b10,
        0x1d2d2d2d, 0x2b261d10,
    }},
    {{
        0x100b1410, 0x2b262620,
        0x10101410, 0x14202614,
        0x10142010, 0x202b140b,
        0x101d261d, 0x2b140b10,
        0x14202b20, 0x2d0b0b14,
        0x262b2b26, 0x140b101d,
        0x2b2b2b2b, 0x1d141d26,
        0x2d2d2c2b, 0x26202626,
    }},
    {{
        0x2b2d2b2b, 0x2b2b2026,
        0x2d2d2d2b, 0x2d2d262d,
        0x2d2d101d, 0x2d2b2d2d,
        0x2c101420, 0x2c2d2d2d,
        0x261d202b, 0x2020262d,
        0x26262b2b, 0x262d202d,
        0x2d2d2d2d, 0x202d2d2d,
        0x202d2d2d, 0x10262d2d,
    }},
    {{
        0x1014202d, 0xb100614,
        0xb14202d, 0xb100614,
        0xb142026, 0xb140b1d,
        0x10141d26, 0x10140b1d,
        0x101d1d26, 0x101d0614,
        0x1020141d, 0x10200614,
        0x10101d14, 0x10140610,
        0x140b261d, 0x14100610,
    }},
    {{
        0x26202b1d, 0x2d2d2d2b,
        0x2d2b2b1d, 0x2d262d2d,
        0x2d2d2d14, 0x2d2d2d2d,
        0x2d2d2614, 0x2d2d2d2d,
        0x2d2d2014, 0x2d2d202d,
        0x2d2d1d10, 0x2d2d202d,
        0x2d1d1406, 0x2d262d2d,
        0x2020140b, 0x2d2c2d2d,
    }},
    {{
        0xc161f16, 0x1108211f,
        0x8021102, 0x16160c0c,
        0x16080c08, 0x16210811,
        0x11160c16, 0x16030c16,
        0x110c1616, 0x1111020c,
        0x1116110c, 0x1103080c,
        0x110c0c0c, 0x160c1611,
        0x16111111, 0x2160803,
    }},
    {{
        0xc161f16, 0x8160c11,
        0x8021102, 0x16081102,
        0x16080c08, 0x160c0308,
        0x11160c16, 0x8030c16,
        0x110c1111, 0xc0c0c16,
        0x3110211, 0x160c0c11,
        0x8030808, 0xc0c160c,
        0x1f0c1611, 0x11081608,
    }},
    {{
        0x52a3222, 0x2e050e1b,
        0x2e1b1222, 0x1b0e0512,
        0x2e0e1222, 0x50e312a,
        0xe2e0531, 0xe122412,
        0xe313131, 0x32320531,
        0x342e3122, 0x2a310531,
        0x24313431, 0x122e241b,
        0x34343122, 0x31122e34,
    }},
    {{
        0x1b05321b, 0x2405051b,
        0x1b2a0e2e, 0x342e3231,
        0x2e053131, 0x3412241b,
        0xe31321b, 0x22050e05,
        0x24342432, 0x340e3412,
        0x32243112, 0x3231240e,
        0x2412312e, 0x2a34242e,
        0x24323122, 0x31243124,
    }},
    {{
        0xe1b0e22, 0x31050e24,
        0x242e342a, 0xe2a2a31,
        0x24240522, 0x321b0e12,
        0x1b123122, 0x32122e0e,
        0x1b1b3122, 0x24322e24,
        0x2e1b2e32, 0x312e3212,
        0x1b2a3231, 0x342a2e24,
        0x31313222, 0x3124122a,
    }},
    {{
        0x1b1b0532, 0x22122e0e,
        0x1b051231, 0x31242a05,
        0x2e1b050e, 0x1b051b1b,
        0x1b2a0e05, 0x120e1b05,
        0x50e2e2e, 0x22120512,
        0x120e312e, 0x2a243434,
        0x34341b0e, 0x31322a0e,
        0x1232242e, 0x221b1b34,
    }},
};

const gba::graphics::Tileset resources::maps::sample_tileset = {sample_palette, sample_tiles};
