#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determain a random number is postive, negative or zero
* Return: 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "postive");
	}
	else 
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
