/*
	This header file contains auxilary functions that are used in converting character
	string which may contain a decimal point to its equivalent decimal representation.
*/

#ifndef AUXFUNC_H
#define AUXFUNC_H

#include <string>

int DecimalPosition(const std::string&);

std::string GetIntegerString(const std::string&, const std::string::size_type&);
std::string GetDecimalString(const std::string&, const std::string::size_type&);

double ConvertToDecimal(const long long&);
int DigitCount(const long long&);

#endif // !AUXFUNC_H