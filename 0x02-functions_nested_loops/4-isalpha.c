#include "main.h"

/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c:a character to be checked.
 * Return: 1 is n if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
