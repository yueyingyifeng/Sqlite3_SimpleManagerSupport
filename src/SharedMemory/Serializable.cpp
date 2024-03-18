#include "include/Serializable.h"

std::vector<std::string> Serializable::splitString(const char *str, const char *separator) {
    std::vector<std::string> result;
    std::string input(str);
    std::string sep(separator);

    size_t startPos = 0;
    size_t endPos = input.find(sep);

    while (endPos != std::string::npos) {
        result.push_back(input.substr(startPos, endPos - startPos));
        startPos = endPos + sep.length();
        endPos = input.find(sep, startPos);
    }

    if (startPos < input.length()) {
        result.push_back(input.substr(startPos));
    }

    return result;
}

template <class T>
inline T Serializable::createObject(const char *data, T (*construct)(const char *data))
{
    return construct(data);
}

