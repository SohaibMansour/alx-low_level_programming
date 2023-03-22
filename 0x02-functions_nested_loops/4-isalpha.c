#include "main.h"

/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @n:a character to be checked.
 * Return: 1 is n if true else 0
 */

int print_sign(int n)
{
	if (n >= 97 && n <= 122)
		return (1);
	if (n >= 65 && n <= 90)
		return (1);
	return (0);
}
