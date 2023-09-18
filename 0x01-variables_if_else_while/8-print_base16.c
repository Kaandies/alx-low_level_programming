#include <stdio.h>
/**
 * main - It prints hexadecimals
 * Return: 0 (Successful)
 */
/* Entry point */
int main(void)
{
	char i;
	char b;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
