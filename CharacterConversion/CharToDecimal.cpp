/* 
	Implementation for converting input characters (string of numbers) to
	its equivalent decimal (integer) representation.
*/

#include <string>

long long CharToDecimal(const std::string& numbers)
{
	/* Determine the size of string */
	std::string::size_type size = numbers.size();
	const char ZERO = '0';	//ZERO as const to convert input character to decimal
	int decimalDigit = 0;	long long decimalInteger = 0;

	/* Read the characters in string and convert it to decimal number */
	for (std::string::size_type position = 0; position < size; ++position)
	{
		/* Subtract ASCII value of 0 from the ASCII value of character to convert it to decimal integer */
		decimalDigit = numbers[position] - ZERO;
		/* Construct decimal integer by shifting previous digit to left */
		decimalInteger = decimalInteger * 10 + decimalDigit;
	}
	/* Return the constructed decimal (integer) representation */
	return decimalInteger;
}