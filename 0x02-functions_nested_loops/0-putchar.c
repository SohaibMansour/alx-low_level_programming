#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(c[x]);
	}
	_putchar('\n');
	return (0);
}
