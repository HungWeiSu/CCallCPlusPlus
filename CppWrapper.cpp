#include "CppDemo.hpp"
#include "CppWrapper.hpp"

static MyClass* obj = nullptr;

void Init() {
    if (obj == nullptr) {
        obj = new MyClass();
    }
}

void Process() {
    if (obj == nullptr) {
        return;  // 这里可以根据需求自行返回错误码或者抛出异常
    }
    return obj->Process();
}

void Destroy() {
    if (obj == nullptr) {
        return;  // 这里可以根据需求自行返回错误码或者抛出异常
    }
    delete obj;
    obj = nullptr;
}