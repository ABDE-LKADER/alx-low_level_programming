#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -> Generates random valid passwords
 * Return: 0 on success
 */

int main(void)
{
	int i, sum, n;
	char password[84];

	srand(time(NULL));
	while (sum != 2772)
	{
		sum = 0;
		i = 0;

		while (sum < 2772)
		{
			n = rand() % 127;
			if (n > 32)
			{
				password[i] = n;
				sum += password[i];
				i++;
			}
		}
	} password[i] = '\0';
	printf("%s", password);
	return (0);
}
