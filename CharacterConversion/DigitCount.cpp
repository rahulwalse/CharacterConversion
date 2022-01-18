/* 
	Auxilary function to return the count of digits in given number.
*/

int DigitCount(const long long& number)
{
	int count = 0;
	long long quotient = number;

	while (quotient > 0)
	{
		/* Chop off the right most digit and increment the count. */
		quotient /= 10;
		++count;
	}
	/* Return the count. */
	return count;
}