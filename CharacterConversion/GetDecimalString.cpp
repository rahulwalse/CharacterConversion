/* 
	Implementation of auxilary function to get the decimal part (characters after '.')
	of the string from the input string.
*/

#include <string>

std::string GetDecimalString(const std::string& inputString, const std::string::size_type& decimalPos)
{
	std::string result;
	/* Store the characters after the decimal point from the input string. */
	for (std::string::size_type index = decimalPos + 1; index != inputString.size(); ++index)
		result += inputString[index];
	/* Return constructed string containing characters after decimal point. */
	return result;
}