#include <gtest/gtest.h>

#include "romanizer.hpp"

TEST(Romanizer, ReturnI_WhenInputIsOne) {
    EXPECT_STREQ(Romanizer::toRoman(1).c_str(), "I");
}

TEST(Romanizer, ReturnIII_WhenInputIsThree) {
    EXPECT_STREQ(Romanizer::toRoman(3).c_str(), "III");
}

TEST(Romanizer, ReturnV_WhenInputIs5) {
    EXPECT_STREQ(Romanizer::toRoman(5).c_str(), "V");
}

TEST(Romanizer, ReturnVI_WhenInputIs6) {
    EXPECT_STREQ(Romanizer::toRoman(6).c_str(), "VI");
}

TEST(Romanizer, ReturnIV_WhenInputIs4) {
    EXPECT_STREQ(Romanizer::toRoman(4).c_str(), "IV");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}