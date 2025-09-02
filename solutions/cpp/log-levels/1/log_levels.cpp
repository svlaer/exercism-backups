#include <string>

namespace log_line {
std::string message(std::string line) {
    int msgStartIndex = line.find(" ") + 1; // Message starts after first space character
    return line.substr(msgStartIndex);
}

std::string log_level(std::string line) {
    int lvlLength = line.find("]") - 1; // [<LEVEL>] has n characters; <LEVEL> has n - 2 characters; ']' has index of n - 1;
    return line.substr(1, lvlLength);
}

std::string reformat(std::string line) {
    std::string msg = message(line);
    std::string lvl = log_level(line);
    return msg + " (" + lvl + ")";
}
}  // namespace log_line
