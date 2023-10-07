#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all alphabetic letters in lowercase.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
