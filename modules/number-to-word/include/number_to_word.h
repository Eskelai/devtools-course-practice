// Copyright 2019 Tonkov Alexei

#include <string>
#include <vector>

using std::vector;
using std::string;

static vector<string> ones{ "","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
static vector<string> teens{ "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen" };
static vector<string> tens{ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

class Number_to_Word {
  public:
    static string wordForNumber(static long int number);
};
