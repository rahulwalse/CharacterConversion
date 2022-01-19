/*
	This header file contains auxilary functions that are used in converting character
	string which may contain a decimal point to its equivalent decimal representation.
*/

#ifndef AUXFUNC_H
#define AUXFUNC_H

#include <string>

/* Function to get the position of decimal point in given string. */
int DecimalPosition(const std::string&);

/* Functions to construct strings before and after decimal point in given string. */
std::string GetIntegerString(const std::string&, const std::string::size_type&);
std::string GetDecimalString(const std::string&, const std::string::size_type&);

/* Function to convert given number to its representation as decimal part. */
double ConvertToDecimal(const long long&);

/* Function to get the number digits in given number. */
int DigitCount(const long long&);

/* Function to convert given decimal part of number to whole number. */
void DecimalToInteger(double&);

/* Function to reverse digits of given number. */
long ReverseDigits(const long&);

/* Function to create string from the given number. */
std::string StringCreator(const long&);

#endif // !AUXFUNC_H