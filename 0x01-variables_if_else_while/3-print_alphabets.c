#include <stdio.h>
/**
 * main -this program prints upper and lower case alphabets
 * Return: 0 (Successful)
 */
/*main entry begins from here */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
