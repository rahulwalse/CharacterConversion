/* 
	Implementation for converting input characters (string of numbers) to
	its equivalent decimal (integer) representation.
*/

#include <string>

long long CharToInteger(const std::string& inputString)
{
	/* Determine the size of string. */
	std::string::size_type size = inputString.size();
	const char ZERO = '0';	//ZERO as const to convert input character to decimal.
	int decimalDigit = 0;	long long decimalInteger = 0;

	/* 
		Read the characters in string and convert it to decimal number by subtracting ASCII value
		of 0 from the ASCII value of the character to be converted to decimal integer.
	*/
	for (std::string::size_type position = 0; position < size; ++position)
	{
		decimalDigit = inputString[position] - ZERO;
		/* Construct decimal integer by shifting previous digit(s) to left. */
		decimalInteger = decimalInteger * 10 + decimalDigit;
	}
	/* Return the constructed decimal (integer) representation. */
	return decimalInteger;
}