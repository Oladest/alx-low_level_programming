#include "main.h"
#include "main.h"

/**
* rot13 - encoder rot13
* @s: pointer to string parans
* Return: *s
*/

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXCYabcdefhijklmnopqrstuvwxyz";
	char datarot[] = "MOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkln";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < s2; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
