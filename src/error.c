#include "test42_libft.h"

/**
 * Prints an error message to stderr and exits the program   
 * 
 * @param error_msg The error message to print.
 */
void	error(char *error_msg)
{
	if (errno)
		perror("ERROR");
	dprintf(STDERR_FILENO, RED "Failed to run test: %s\n" RESET, error_msg);
	exit(EXIT_FAILURE);
}