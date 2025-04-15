#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac; /* This tells the compiler you're intentionally not using ac */

	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
