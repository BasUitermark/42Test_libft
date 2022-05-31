#include "test42_libft.h"

/**
 * Checks to see if the libft directory exists, if the libft.h header file exists, and if the
 * Makefile exists. If any of these conditions are not met, the program will exit with an error message
 * 
 * @return The return value is the result of the access() function.
 */
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

static void	read_make(void)
{
	char *buffer = 0;
	long length;
	FILE *f = fopen("../../libft/Makefile.txt", "rb");

	if (f)
	{
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = malloc(length);
		if (buffer)
		{
			fread (buffer, 1, length, f);
		}
		fclose (f);
	}
	printf("%s", buffer);
}

void	filecheck(int argc)
{
	// if (argc != 2)
	// 	error("Please specify testing range!");
	// if (locate_binary())
	// {
	// 	printf(GREEN "Libft folder found!\n" RESET);
	// 	printf(GREEN "libft.h found!\n" RESET);
	// 	printf(GREEN "Makefile found!\n" RESET);
	// }
	read_make();
}