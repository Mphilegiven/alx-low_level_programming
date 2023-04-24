#include<stdio.h>
/**
 * main - Entry
 * Description - Printing alphabets in the lower case
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	return (0);
}
