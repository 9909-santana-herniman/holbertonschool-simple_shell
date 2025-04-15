#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t nread;

	printf("$ ");
	nread = getline(&lineptr, &n, stdin); /* Waits for user to type input */

	if (nread == -1) /* This happens on EOF (Ctrl + D) */
	{
		printf("End of input\n");
		free(lineptr);
		return (0);
	}

	printf("You entered: %s", lineptr);
	free(lineptr);
	return (0);
}
