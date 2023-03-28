#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int l, i;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the  string bylooping to half the string*/
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l  1 - i] = tmp;
	}
}
