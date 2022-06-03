#include <stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: Always 0 success.
 */
int main(void)
{
char charType;	
int intType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of char: %zu byte\n", sizeof(intType));
printf("Size of char: %zu byte\n", sizeof(longintType));
printf("Size of char: %zu byte\n", sizeof(longlongintType));
printf("Size of char: %zu byte\n", sizeof(floatType));
return (0);
}
