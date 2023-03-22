#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the alphabet using _putchar function
 * the alphabet a - z
 */

void print_alphabet(void);
{
        int x;

        for (x = 'a'; x <= 'z'; x++)
                _putchar(x);
        _putchar('\n');
}
