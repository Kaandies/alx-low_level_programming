#include <stdio.h>
/**
 * main - this program prints lower case letters except q and e
 * Return: 0 (Successful)
 */
/* main entry of the program */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	}
	putchar('\n');

	return (0);
	
}
