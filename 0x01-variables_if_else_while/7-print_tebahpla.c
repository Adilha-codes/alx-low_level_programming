#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: print_tebahpla.c
*
* Return: 0 (Success)
*/

int main(void)
{
	char ch = 'z';
	
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
