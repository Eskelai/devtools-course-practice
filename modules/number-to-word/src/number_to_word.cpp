// Copyright 2019 Tonkov Alexei

#include "include/number_to_word.h"

#include <iostream>
#include <string>

std::string Number_to_Word::wordForNumber(static long int number) {
    if (number < 10) {
        return ones[number];
    }
    else if (number < 20) {
        return teens[number - 10];
    }
    else if (number < 100) {
        return tens[number / 10] + ((number % 10 != 0) ? " " + wordForNumber(number % 10) : "");
    }
    else if (number < 1000) {
        return wordForNumber(number / 100) + " hundred" + ((number % 100 != 0) ? " " + wordForNumber(number % 100) : "");
    }
    else if (number < 1000000) {
        return wordForNumber(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + wordForNumber(number % 1000) : "");
    }
    else if (number < 1000000000) {
        return wordForNumber(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + wordForNumber(number % 1000000) : "");
    }
    else if (number < 1000000000000) {
        return wordForNumber(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + wordForNumber(number % 1000000000) : "");
    }
    return "error";
}
