#include<unistd.h>
#include<stdio.h>
/**
 * main - Entry point
 * Desciption: prints lower case alphabet in reverse
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
