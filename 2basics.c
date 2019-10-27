#include "holberton.h"

void reconoced_format_string(char *change, xbuf *buf)
{
	int loop, size_change,flag;

	loop = 0;
	size_change = _strl(change);
	flag = 0;
	if (*(change + size_change - 1) == '%' || *(change + size_change - 1) == ' ')
			{
				return;
			}
	while (loop < size_change)
	{
		if (*(change + 1) == ' ' && !flag)
		{
			char_to_buff(buf, ' ');
			flag = 1;
		}
		if (*(change + loop) != ' ')
		{
			char_to_buff(buf, *(change + loop));
		}
		loop++;
	}
}


