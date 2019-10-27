#include "holberton.h"

int _nlen(unsigned int n)
{
	int c;

	for (c = 0; n > 0; c++)
	{
		n /=10;
	}
	return (c);
}

void reverse_numbers(char *a, int n)
{
	
    	int loop, save;     
	
	n -= 1;
	for(loop = 0; loop < save;loop++ , n--)
	{
		save = a[loop];
		a[loop] = a[n];
		a[n] = save;
	}
}

char *n_converter(unsigned int n, int base, char *ascci)
{
	int longitude,loop, init_long;
	char *output;

	longitude = _nlen(n);
	init_long = 0;
	if (base > 9)
	{
		init_long = longitude + 1;
	}
	else if (base > 7)
	{
		init_long = longitude + 2;
	}
	else 
	{
		init_long = (8 * sizeof(unsigned int) + 1);
	}
	output = malloc(init_long * sizeof(*output));
	for (loop = 0; n > 0; loop++)
	{
		output[loop] = ascci[n % base];
		n /= base;
	}
	reverse_numbers(output, loop);
	output[loop] = '\0';
	return (output);
}
