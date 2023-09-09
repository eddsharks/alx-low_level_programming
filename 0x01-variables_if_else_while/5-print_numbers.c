#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 from 0 to 9
 *
 * Return: Always 0.
 */
int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar(number + '0');
    }

    putchar('\n');

    return (0);
}

