/* 
	Implementation of auxilary function for converting the decimal part to its
	equivalent decimal format representation (numbers after decimal point). 
*/

#include "auxfunc.h"

double ConvertToDecimal(const long long& decimalPart)
{
	double result = decimalPart;
	/* Get the count of digits. */
	int digits = DigitCount(decimalPart);

	/* 
		Divide the decimal part by 10 as many times as there are digits in the number
		to shift the decimal point before the first digit.
	*/
	for (int iteration = 0; iteration < digits; ++iteration)
		result /= 10;

	return result;
}