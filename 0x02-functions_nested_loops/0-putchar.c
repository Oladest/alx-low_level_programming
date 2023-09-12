#include <unistd.h>
#include <stdio.h>

/**
* main - A program that prints "_putchar";
*
* Return: 0 (success)
*/
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
