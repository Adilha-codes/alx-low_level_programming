#include <stdio.h>

/**
* main - entry point
*
* Description: reverse alp
*
* Return: 0 (Success)
*/

int main(void)
i{
	char ch = 'z';
	
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
