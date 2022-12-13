#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * Return: 0 if success.
 */
int main(void)
{
int x;
long int y;
long long int z;
char a;
float b;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}
