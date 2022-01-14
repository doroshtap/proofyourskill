#include <iostream>
#include <format>
#include "rot13.hpp"

template <typename... Args>
void println(std::string fmt, Args&&... args) {
    std::cout << std::format(fmt, std::forward<Args>(args)...) << std::endl;
}

int main() {
    std::string data = rot13::encode("How can you tell an extrovert from an introvert at NSA?");
    std::cout << data << std::endl;
    data = rot13::decode(data);
    std::cout << data << std::endl;
    return 0;
}
