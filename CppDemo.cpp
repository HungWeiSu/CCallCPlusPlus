// MyClass.cpp
#include <stdint.h>
#include <stdio.h>
#include "CppDemo.hpp"
#include "CppWrapper.hpp"

void MyClass::Write(uint8_t* data, uint32_t length) {
    CWrite(data, length);
}

uint8_t* MyClass::Read(uint32_t length) {
    return CRead(length);
}

void MyClass::Process() {
    uint8_t data1[] = {0x01, 0x02, 0x03, 0x04, 0x0a};
    uint8_t data2[] = {0x21, 0x22, 0x23, 0x24, 0x2a};
    printf("------------- CWrite 1 -------------\n");
    int length = 5;
    CWrite(data1, length);
    printf("------------- CRead 1 -------------\n");
    uint8_t* result = CRead(length);
    for (int i = 0; i < length; i++) {
        printf("%u ", result[i]);
    }
    printf("\n");

    printf("------------- CWrite 2 -------------\n");
    CWrite(data2, length);
    printf("------------- CRead 2 -------------\n");
    result = CRead(length);
    for (int i = 0; i < length; i++) {
        printf("%u ", result[i]);
    }
    printf("\n");
}