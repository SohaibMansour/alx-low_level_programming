#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - utilizes on the _putchar function to print
 * 		the alphabet a - z
 */

void print_alphabet(void);
{
        int x;

        for (x = 'a'; x <= 'z'; x++)
                _putchar(x);
        _putchar('\n');
}
