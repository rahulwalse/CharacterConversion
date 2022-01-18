/*
	Implementation for converting character string which may contain a decimal
	point to its equivalent decimal representation.
*/

#include <string>
#include "auxfunc.h"
#include "conversionf.h"

long double CharToDecimal(const std::string& inputString)
{
	long double decimalNumber = 0;
	long long integerPart = 0, decimalPart = 0;
	std::string::size_type decimalIndex = 0, size = inputString.size();
	
	/* Scan the input string for decimal point '.' and get the position of decimal point. */
	int index = DecimalPosition(inputString);
	/* 
		If the index is -1 there is no decimal point; CharToInteger() function can be used for conversion.
	*/
	if (index == -1)
	{
		decimalNumber = CharToInteger(inputString);
	}
	else
	{
		/* Store the decimal points index in string size_type. */
		decimalIndex = index;

		/* Two strings to hold integer and decimal part. */
		std::string integerString, decimalString;

		/* Separate the integer and decimal part from the input string. */
		/* Integer part of the string */
		integerString = GetIntegerString(inputString, decimalIndex);
		/* Decimal part of the string */
		decimalString = GetDecimalString(inputString, decimalIndex);

		/* Convert the integer part to its equivalent decimal (integer) representation. */
		integerPart = CharToInteger(integerString);
		/* Convert the decimal part to its equivalent decimal representation. */
		decimalPart = CharToInteger(decimalString);

		/* 
			Convert the decimal part to its equivalent decimal representation and add the 
			integer part to get the complete decimal number.
		*/
		decimalNumber = integerPart + ConvertToDecimal(decimalPart);
	}
	return decimalNumber;
}