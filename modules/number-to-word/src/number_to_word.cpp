// Copyright 2019 Tonkov Alexei

#include "include/number_to_word.h"

#include <iostream>
#include <string>

std::string Number_to_Word::nameForNumber(long number) {
	if (number < 10) {
		return ones[number];
	}
	else if (number < 20) {
		return teens[number - 10];
	}
	else if (number < 100) {
		return tens[number / 10] + ((number % 10 != 0) ? " " + nameForNumber(number % 10) : "");
	}
	else if (number < 1000) {
		return nameForNumber(number / 100) + " hundred" + ((number % 100 != 0) ? " " + nameForNumber(number % 100) : "");
	}
	else if (number < 1000000) {
		return nameForNumber(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + nameForNumber(number % 1000) : "");
	}
	else if (number < 1000000000) {
		return nameForNumber(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + nameForNumber(number % 1000000) : "");
	}
	else if (number < 1000000000000) {
		return nameForNumber(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + nameForNumber(number % 1000000000) : "");
	}
	return "error";
}