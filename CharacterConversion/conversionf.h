/*
	This header file contains declarations of the functions used for converting characters
	(string of characters 0 - 9) to its equivalent decimal representation.
*/

#ifndef CONVERSIONF_H
#define CONVERSIONF_H

#include <string>

long long CharToInteger(const std::string&);

long double CharToDecimal(const std::string&);

#endif // !CONVERSIONF_H