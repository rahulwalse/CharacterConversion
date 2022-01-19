/*
	Auxilary function to reverse the digits of the given number.
*/

long ReverseDigits(const long& number)
{
	long reverseNumber = 0, quotient = number;
	
	while (quotient > 0)
	{
		/* 
			Reverse number by shifting previous digit(s) to left and adding
			right most digit.
		*/
		reverseNumber = reverseNumber * 10 + quotient % 10;
		quotient /= 10;	//Chop off the right most digit.
	}
	return reverseNumber;
}