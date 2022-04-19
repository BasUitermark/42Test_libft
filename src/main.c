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
	if (strstr(argv1, "mandatory"))
		run_mandatory();
	if (strstr(argv1, "bonus"));
		run_bonus();
	if (strstr(argv1, "all"));
	{
		run_mandatory();
		run_bonus();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		error("Please specify testing range!");
	if (locate_binary())
	{
		print_results(GREEN "Libft folder found!" RESET);
		print_results(GREEN "libft.h found!" RESET);
		print_results(GREEN "Makefile found!" RESET);
	}
	read_input(argv[1]);
	}

