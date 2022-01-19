/*
	Implementation for converting the decimal number to its equivalent 
	characters representation.
*/

#include <string>
#include "auxfunc.h"

std::string DecimalToChar(const double& number)
{
	/* Separate the integer part and decimal part of number. */
	long integerPart = number;
	double decimalPart = number - integerPart;

	/* Convert the decimal part to integer. */
	DecimalToInteger(decimalPart);

	/* Reverse the integer and decimal part. */
	long reversedInteger = ReverseDigits(integerPart);
	long reversedDecimal = ReverseDigits(decimalPart);

	/* 
		If decimal part is non zero, concatenate the two strings and insert decimal 
		point between the two strings and return. If the decimal point is zero then
		just return constructed string for integer part.
	*/
	if (decimalPart)
		return StringCreator(reversedInteger) + '.' + StringCreator(reversedDecimal);
	else
		return StringCreator(reversedInteger);
}