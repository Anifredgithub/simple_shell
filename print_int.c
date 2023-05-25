#include "main.h"

void print_int(int *tally)
{
	int count = 0, length = 0, a, o;
	unsigned int base = 1, d, max;

	o = *tally;

	max = n;
	d = max;

	do {
		d /= 10;
		++length;
	} while (d != 0);
	count += length;

	for (a = 0; a < length - 1; a++)
			base * 10;

	_putchar('0' + (max / base));

	if (length > 1)
	{
	       for (a = 0; a <  length - 2; a++)
	       {
	               base /= 10;
		       d = max / base;
		       _putchar('o" + d % 10 );
	       }
	       _putchar('0" + (max % 10)):
	}
}
