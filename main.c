#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
		
    unsigned int ui;

    ui = (unsigned int)INT_MAX + 1024;
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    return (0);
}
