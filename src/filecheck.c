// #include "test42_libft.h"
#include "../include/test42_libft.h"

/**
 * Checks to see if the libft directory exists, if the libft.h header file exists, and if the
 * Makefile exists. If any of these conditions are not met, the program will exit with an error message
 * 
 * @return The return value is the result of the access() function.
 */
static bool	locate_binary(void)
{
	if (access("../libft", F_OK) == -1)
		error("Could not find libft directory!");
	if (access("../libft/libft.h", F_OK) == -1)
		error("Could not find libft header file!");
	if (access("../libft/Makefile", F_OK) == -1)
		error("Could not find Makefile");
	return (TRUE);
}

static char	*read_make(void)
{
	char	*buffer;
	long	length;
	FILE	*fd = fopen("../libft/Makefile", "rb");

	if (fd)
	{
		fseek(fd, 0, SEEK_END);
		length = ftell (fd);
		fseek(fd, 0, SEEK_SET);
		buffer = malloc(length);
		if (buffer)
			fread(buffer, 1, length, fd);
		fclose (fd);
	}
	return (buffer);
}

static bool	check_make(char *makefile)
{
	if (!strstr(makefile, "all:"))
		error("Couldn't find all rule!");
	if (!strstr(makefile, "clean:"))
		error("Couldn't find clean rule!");
	if (!strstr(makefile, "fclean:"))
		error("Couldn't find fclean rule!");
	if (!strstr(makefile, ".PHONY:"))
		error("Couldn't find phony rule!");
	if (!strstr(makefile, "-Wall") || !strstr(makefile, "-Werror") || !strstr(makefile, "-Wextra"))
		error("Couldn't find compile flags!");
	if (!strstr(makefile, "%.o: %.c"))
		error("Your Makefile relinks!");
	free(makefile);
	return (TRUE);
}

void	filecheck(int argc)
{
	char	*makefile;
	if (argc != 2)
		error("Please specify testing range!");
	if (locate_binary())
	{
		printf(GREEN "Libft folder found!\n" RESET);
		printf(GREEN "libft.h found!\n" RESET);
		printf(GREEN "Makefile found!\n" RESET);
	}
	makefile = read_make();
	if (check_make(makefile));
		printf(GREEN "Makefile is correct!\n" RESET);
}