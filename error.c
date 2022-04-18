#include "test42_libft.h"

void	error(char *error_msg)
{
	if (errno)
		perror("ERROR");
	else
		dprintf(STDERR_FILENO, "%s/n", error_msg);
	exit(EXIT_FAILURE);
}