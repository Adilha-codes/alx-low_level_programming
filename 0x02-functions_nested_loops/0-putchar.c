#include <unsitd.h>
#include "main.h"

/**
 * _putchar - descirption
 *
 * @c: the character
 *
 * Return: on success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
