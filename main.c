#include "test42_libft.h"

void	init_msg(void)
{
	
}

int	locate_binary(void)
{
	if (access("../libft", F_OK) == -1)
		error("Could not find libft directory!");
	if (access("../libft/libft.h", F_OK) == -1)
		error("Could not find libft header file!");
	if (access("../libft/Makefile", F_OK) == -1)
		error("Could not find Makefile");
	return (1);
}

int	main(void)
{
	if (locate_binary())
		print_results(GREEN "All files found!" RESET, 1);

}
