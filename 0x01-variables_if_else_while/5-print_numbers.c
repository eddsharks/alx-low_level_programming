#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers from 0 to 9 followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar(number + '0');
        putchar('\n');
    }

    return (0);
}
