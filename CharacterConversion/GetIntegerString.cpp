/*
	Implementation of auxilary function to get the integer part (characters before '.')
	of the string from the input string.
*/

#include <string>

std::string GetIntegerString(const std::string& inputString, const std::string::size_type& decimalPos)
{
	std::string result;
	/* Store the characters (before the decimal point) from the input string.  */
	for (std::string::size_type index = 0; index != decimalPos; ++index)
		result += inputString[index];
	/* Return the constructed string containing characters before decimal point. */
	return result;
}