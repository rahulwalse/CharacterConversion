/*
	Implementation for function which returns the position of decimal point
	'.', if any, in the given character string. 
*/

#include <string>

int DecimalPosition(const std::string& charString)
{
	/* 
		Initialize the decimal point to -1. -1 indicates that there is no decimal point
		in the character string.
	*/
	int decimalPoint = -1;
	/* Scan the string for decimal point; if found then assign it to decimalPoint. */
	for (std::string::size_type position = 0; position != charString.size(); ++position)
	{
		if (charString[position] == '.')
			decimalPoint = position;
	}
	/* Return the decimal points position. */
	return decimalPoint;
}