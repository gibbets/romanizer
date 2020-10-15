#ifndef ROMANIZER_H_DEF
#define ROMANIZER_H_DEF

#include <string>

class Romanizer {
    public:
    Romanizer() = delete;

    static std::string toRoman(int value);
};

#endif