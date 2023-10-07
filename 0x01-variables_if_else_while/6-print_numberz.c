#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
