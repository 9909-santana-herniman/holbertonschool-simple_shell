#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split_line(char *line)
{
	char **tokens = malloc(64 * sizeof(char *));
	char *token;
	int i = 0;

	token = strtok(line, " \t\n");

	while (token != NULL)
	{
		tokens[i++] = token;
		token = strtok(NULL, " \t\n");
	}

	tokens[i] = NULL;
	return (tokens);

}

int main(void)
{
    char input[1024];
    char **args;
    int i;

    printf("Enter a command: ");
    fgets(input, sizeof(input), stdin); // get user input

    args = split_line(input); // split input

    printf("Split arguments:\n");
    for (i = 0; args[i] != NULL; i++)
    {
        printf("arg[%d] = '%s'\n", i, args[i]);
    }

    free(args); // cleanup
    return 0;
}
