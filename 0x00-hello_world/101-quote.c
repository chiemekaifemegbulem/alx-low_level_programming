#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints out a predefined statement
 * Return: 1 if success.
 */
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful
\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

