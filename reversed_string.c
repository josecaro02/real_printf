#include "holberton.h"

int check_reverse(char *str)
{
	(void) str;
	return (1);
}

void reverse(char *str)
{
	int size, loop;
	char caracter;

	size = _strl(str);
	for(loop = 0; loop < size;loop++ , size--)
	{
		caracter = str[size];
		str[size] = str[loop];
		str[loop] = caracter;
	}
}

char *_new_pointer_str(char *str)
{
	char *copy;
	unsigned int size, loop;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strl(str);
	size += 1;
	copy = malloc(size * sizeof(*copy));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (loop = 0; loop < size; loop++)
	{
		copy[loop] = str[loop];
	}
	return (copy);
}

void real_reverse(char *str, va_list valist, xbuf *buf)
{
	char *reversed;
	(void) str;

	reversed = _new_pointer_str(va_arg(valist, char*));
	if (reversed == NULL)
	{
		reversed = "(NULL)";
	}
	reverse(reversed);
	string_to_buff(buf, reversed, _strl(reversed));
}
