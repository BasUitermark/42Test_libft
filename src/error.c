#include "test42_libft.h"

void	error(char *error_msg)
{
	if (errno)
		perror("ERROR");
	dprintf(STDERR_FILENO, RED "%s\n" RESET, error_msg);
	exit(EXIT_FAILURE);
}