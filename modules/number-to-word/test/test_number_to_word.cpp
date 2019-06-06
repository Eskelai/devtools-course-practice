// Copyright 2019 Tonkov Alexei

#include "include/number_to_word.h"
#include <gtest/gtest.h>

#include <string>

TEST(Number_to_word, 5_to_word) {

	Number_To_Word a;
	std::string str = "five";

	ASSERT_EQ(a.nameForNumber(5), str);
}

TEST(Number_to_word, 22_to_word) {

	Number_To_Word a;
	std::string str = "twenty two";

	ASSERT_EQ(a.nameForNumber(22), str);
}

