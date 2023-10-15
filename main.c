#include "shell.h"
/**
 * main - The starting point for for simple shell.
 * @ac : Count of command-line arguments.
 * @argv : An array of strings representing the arguments of cmd-line.
 *
 * Return : 0 Always (success)
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status;

	(void)ac;
	while(1)
	{
		line = read_line();

		command = tokenizer(line);

		status = _execute(command, argv);
	}
}

		
