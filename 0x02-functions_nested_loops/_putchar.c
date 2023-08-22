#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the the character c to stdout
*@C: the character to print
*
*Return: On Successful 1.
*On Error, -1 is returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

