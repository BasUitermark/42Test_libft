#include "test42_libft.h"

static int	locate_binary(void)
{
	if (access("../libft", F_OK) == -1)
		error("Could not find libft directory!");
	if (access("../libft/libft.h", F_OK) == -1)
		error("Could not find libft header file!");
	if (access("../libft/Makefile", F_OK) == -1)
		error("Could not find Makefile");
	return (1);
}

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

int	main(int argc, char **argv)
{
	if (argc != 2)
		error("Please specify testing range!");
	if (locate_binary())
	{
		printf(GREEN "Libft folder found!\n" RESET);
		printf(GREEN "libft.h found!\n" RESET);
		printf(GREEN "Makefile found!\n" RESET);
	}
	read_input(argv[1]);
}

