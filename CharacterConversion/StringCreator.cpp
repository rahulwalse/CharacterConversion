/*
	Implementation for constructing string from the given integer number.
*/

#include <string>

std::string StringCreator(const long& number)
{
	int quotient = number, currentChar = -1;
	const char ZERO = '0';
	std::string result;
	while (quotient > 0)
	{
		/*
			Get the digit from number and convert it to equivalent character by adding 
			ASCII value of 0 and then concatenate the character to the string.
		*/
		currentChar = quotient % 10;
		result += (currentChar + ZERO);
		quotient /= 10;	//Chop off the right most digit.
	}
	/* Return the constructed string of characters containing numbers.*/
	return result;
}