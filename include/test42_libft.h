#ifndef TEST42_LIBFT
# define TEST42_LIBFT

# include <unistd.h>
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include "def.h"
# include "../../libft/libft.h"

int		main(int argc, char **argv);
void	error(char *error_msg);
void	run_mandatory(void);
void	run_bonus(void);
void	run_single_function(char *argv1);

void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void	strlen_test(void);
void	memset_test(void);
void	bzero_test(void);
void	memcpy_test(void);
void	memmove_test(void);
void	strlcpy(void);
void	strlcat_test(void);
void	toupper_test(void);
void	tolower_test(void);

#endif