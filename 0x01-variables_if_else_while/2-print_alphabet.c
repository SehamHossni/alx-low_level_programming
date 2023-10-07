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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
