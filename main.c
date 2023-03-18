// main.c
#include <stdio.h>
#include <stdint.h>
#include "CppWrapper.hpp"

uint8_t buffer[64];
void CWrite(uint8_t* data, uint32_t length) {
    for (int i = 0; i < length; i++) {
        buffer[i] = data[i];
    }
}

uint8_t* CRead(uint32_t length) {
    return buffer;
}

int main() {
    Init();
    Process();
    Destroy();
    return 0;
}
