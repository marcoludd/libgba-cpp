#include <libgba-cpp/arch/sound/sound.h>

#include <libgba-cpp/arch/registers.h>
#include <libgba-cpp/utils/general.h>

using utils::value_of;
using namespace gba::arch::registers::sound;

namespace gba {

void sound::set_enabled(bool flag) {
    status[7] = flag;
}

void sound::set_left(sound::Channel channel, bool enabled) {
    dmg_control[0x8 + value_of(channel)] = enabled;
}

void sound::set_right(sound::Channel channel, bool enabled) {
    dmg_control[0xc + value_of(channel)] = enabled;
}

void sound::left_volume(unsigned volume) {
    dmg_control =
        (dmg_control.to_ulong() & (~0b111u << 4)) | (volume & 0b111);
}

void sound::right_volume(unsigned volume) {
    dmg_control =
        (dmg_control.to_ulong() & ~0b111u) | (volume & 0b111);
}

}
