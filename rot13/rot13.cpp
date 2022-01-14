#include "rot13.hpp"

static const std::string big   = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const std::string small = "abcdefghijklmnopqrstuvwxyz";

std::string rot13::encode(const std::string& data) {
    std::string encoded;

    for (const auto& c : data) {
        std::size_t pos;
        if ((pos = big.find_first_of(c)) != std::string::npos) {
            pos = (pos + 13) % 26;
            encoded.push_back(big[pos]);
        } else if ((pos = small.find_first_of(c)) != std::string::npos) {
            pos = (pos + 13) % 26;
            encoded.push_back(small[pos]);
        } else {
            encoded.push_back(c);
        }
    }

    return encoded;
}

std::string rot13::decode(const std::string& data) {
    return encode(data);
}
