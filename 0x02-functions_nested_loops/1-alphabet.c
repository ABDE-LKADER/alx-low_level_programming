#include <unistd.h>

void print_alphabet(void)
{
	char Start;

	Start = 'a';
	while (Start <= 'z')
	{
		write(1, &Start,1);
		Start++;
	}
	write(1, "\n",1);
}
