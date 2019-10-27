#include "holberton.h"

int check_unsigned(char *str)
{
	(void) str;
	return (1);
}

void real_unsigned(char *str, va_list valist, xbuf *buf)
{
	unsigned int c;
	char *unsign;
	(void) str;

	c = va_arg(valist, unsigned int);
	unsign = n_converter(c, 10, "0123456789");
	string_to_buff(buf, unsign, _strl(unsign));	
	free(unsign);
}
