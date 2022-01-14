#ifndef __ROT13_HPP__
#define __ROT13_HPP__

#include <string>

namespace rot13 {
    std::string encode(const std::string& data);
    std::string decode(const std::string& data);
}

#endif // __ROT13_HPP__
