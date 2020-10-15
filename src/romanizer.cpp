#include "include/romanizer.hpp"

std::string Romanizer::toRoman(int value) {
    std::string result{""};

    while(value > 0) {
        if((value / 5) == 1) {
            result.append("V");
            value -= 5;
        }
        else if(value == 4) {
            result.append("IV");
            value -= 4;
        }
        else {
            result.append("I");
            value--;
        }
    }

    return result;
}