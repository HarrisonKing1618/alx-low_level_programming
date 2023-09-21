#include <stdio.h>
/**
  *main - Entry_point
  *Description: 'code that prints lowercase alphabeths with putchar'
  *Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
