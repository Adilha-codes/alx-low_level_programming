#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: all alphabet
*
* Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

return (0);
}
