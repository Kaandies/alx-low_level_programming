#include <stdio.h>
/**
 * main - A program that prints lowercase alphabets
 * Return: 0 (Successfull)
 */
/* Main code begins from here */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	putchar('\n');
	}
	return (0);
}
