// Copyright 2019 Tonkov Alexei

#include "include/number_to_word.h"
#include <gtest/gtest.h>

#include <string>

TEST(Number_to_word, five_to_word) {
    // Arrange
    __int64 input = 5;
    string output;

    // Act
    output = Number_to_Word::wordForNumber(input);
    
    //Assert
    EXPECT_EQ("five", output);
}
