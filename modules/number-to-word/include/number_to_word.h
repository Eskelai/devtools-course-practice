// Copyright 2019 Tonkov Alexei

#ifndef MODULES_NUMBER_TO_WORD_INCLUDE_NUMBER_TO_WORD_H_
#define MODULES_NUMBER_TO_WORD_INCLUDE_NUMBER_TO_WORD_H_

#include <string>
#include <vector>

using std::vector;
using std::string;

static vector<string> ones{ "", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine" };
static vector<string> teens{ "ten", "eleven", "twelve",
    "thirteen", "fourteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen" };
static vector<string> tens{ "", "", "twenty", "thirty",
    "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

class Number_to_Word {
    public:
    static string wordForNumber(static __int64 number);
};
#endif  // MODULES_NUMBER_TO_WORD_INCLUDE_NUMBER_TO_WORD_H_
