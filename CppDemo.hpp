#ifndef CPPDEMO_HPP
#define CPPDEMO_HPP

#include <stdint.h>

class MyClass {
public:
    void Write(uint8_t* data, uint32_t length);
    uint8_t* Read(uint32_t length);
    void Process();
};

#endif