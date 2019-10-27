#include "holberton.h"

void (*s_func(char c))(char *, va_list, xbuf *)
{
	v_string function[] = {
		{'r', real_reverse},
		{'u', real_unsigned},
		{'o', real_unsigned_octal}
	};
	int d;
	
	d = 0;
	while(d < 3)
	{
		if (function[d].format == c)
		{
			return (function[d].create);
		}
		d++;
	}
	return (NULL);
}
