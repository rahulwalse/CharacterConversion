/*
	Implementation for checking if there is decimal data in given
	string.
*/

#include <string>

/* Function declaration for checking if character represents digit */
inline bool IsDigit(const char&);

bool HasDecimalData(const std::string& inputString)
{
	bool isDecimal = false;

	/* Scan the string */
	for (std::string::size_type pos = 0; pos != inputString.size(); ++pos)
	{
		/* Check if the current character is a decimal point. */
		if (inputString[pos] == '.')
		{
			/* 
				Check if the next immediate character is a digit, if it is set
				the flag to true. 
			*/
			if (IsDigit(inputString[pos + 1]))
				isDecimal = true;
			else
				continue;	//- Continue scanning string
		}
		else if (IsDigit(inputString[pos]))
			isDecimal = true;
		else
			continue;
	}
	return isDecimal;
}

/* Inline function to check if the character represents a digit. */
inline bool IsDigit(const char& inputChar)
{
	return (inputChar >= '0' && inputChar <= '9') ? true : false;
}