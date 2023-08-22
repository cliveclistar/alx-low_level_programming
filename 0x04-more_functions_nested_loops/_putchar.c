#include "main.h"
  2 #include <unistd.h>
  3 /**
  4 *_putchar - writes the the character c to stdout
  5 *@C: the character to print
  6 *
  7 *Return: On Successful 1.
  8 *On Error, -1 is returned, and errno is set appropriately
  9 */
 10 int _putchar(char c)
 11 {
 12         return (write(1, &c, 1));
 13 }
