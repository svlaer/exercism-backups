#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(int n) {
    std::string result = "";
    bool divisible = false;

    if (n % 3 == 0) {
        result += "Pling";
        divisible = true;
    }
    if (n % 5 == 0) {
        result += "Plang";
        divisible = true;
    }
    if (n % 7 == 0) {
        result += "Plong";
        divisible = true;
    }
    if (!divisible) {
        result += std::to_string(n);
    }
    
    return result;
}
}  // namespace raindrops
