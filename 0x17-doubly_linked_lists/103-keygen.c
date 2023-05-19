#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 * Return: Always 0.
 */

int main(void)
{
    int i, sum, n;

    char password[84];

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 84; i++)
    {
        n = rand() % 78;

        password[i] = n;

        sum += password[i];

        putchar(password[i]);
    }

    putchar(2772 - sum);

    return (0);
}
