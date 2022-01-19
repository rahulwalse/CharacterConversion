/*
	Auxilary function to convert the decimal number to whole number
	by shifting the decimal point by 5 positions to right.
*/

void DecimalToInteger(double& decimalNumber)
{
	/* Set precision to 5. */
	constexpr int precision = 5;
	/* Shift the decimal point to the right by multiplying it by 10. */
	for (int iteration = 0; iteration < precision; ++iteration)
		decimalNumber *= 10;
}