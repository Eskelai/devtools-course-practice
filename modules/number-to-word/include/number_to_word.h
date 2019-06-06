// Copyright 2019 Tonkov Alexei

#include <string>
#include <vector>

using std::vector;
using std::string;

class Number_to_Word {

	public:
		std::string nameForNumber(long number);

	private:
		vector<string> ones{ "","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
		vector<string> teens{ "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen" };
		vector<string> tens{ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
};