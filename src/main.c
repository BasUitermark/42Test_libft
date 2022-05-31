#include "test42_libft.h"

/**
 * Reads the input and runs the appropriate functions
 * 
 * @param argv1 The first argument passed to the program.
 */
static void	read_input(char *argv1)
{
	if (strcmp(argv1, "mandatory") == 0)
		run_mandatory();
	// if (strcmp(argv1, "bonus") == 0)
	// 	run_bonus();
	if (strcmp(argv1, "all") == 0)
	{
		run_mandatory();
		// run_bonus();
	}
	else
		run_single_function(argv1);
}

/**
 * It reads the input and calls the appropriate function
 * 
 * @param argc the number of arguments passed to the program
 * @param argv The arguments passed to the program.
 */
int	main(int argc, char **argv)
{
	filecheck(argc);
	// read_input(argv[1]);
	exit(EXIT_SUCCESS);
}
