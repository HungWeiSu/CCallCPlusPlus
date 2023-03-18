#ifndef CPPDWRAPPER_HPP
#define CPPDWRAPPER_HPP

// extern "C" 告诉编译器以 C 的方式来处理这些函数，而不是 C++ 的方式。
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// 由C實作
void CWrite(uint8_t* data, uint32_t length);
uint8_t* CRead(uint32_t length);

// 由C++實作
void Init();
void Process();
void Destroy();

#ifdef __cplusplus
}
#endif

#endif