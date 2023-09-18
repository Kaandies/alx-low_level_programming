#include <stdio.h>
/**
 * main - It prints lowercase in reverse
 * Return: 0 (Successful)
 */
/* Entry point */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
