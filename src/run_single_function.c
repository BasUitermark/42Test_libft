#include "test42_libft.h"

void	run_single_function(char *argv1)
{
	if (strcmp(argv1, "isalpha") == 0)
		isalpha_test();
	if (strcmp(argv1, "isdigit") == 0)
		isdigit_test();
	if (strcmp(argv1, "isalnum") == 0)
		isalnum_test();
	if (strcmp(argv1, "isascii") == 0)
		isascii_test();
	if (strcmp(argv1, "isprint") == 0)
		isprint_test();
	if (strcmp(argv1, "strlen") == 0)
		strlen_test();
	if (strcmp(argv1, "memset") == 0)
		memset_test();
	if (strcmp(argv1, "bzero") == 0)
		bzero_test();
	if (strcmp(argv1, "memcpy") == 0)
		memcpy_test();
	if (strcmp(argv1, "memmove") == 0)
		memmove_test();
	if (strcmp(argv1, "strlcpy") == 0)
		strlcpy_test();
	if (strcmp(argv1, "strlcat") == 0)
		strlcat_test();
	if (strcmp(argv1, "toupper") == 0)
		toupper_test();
	if (strcmp(argv1, "tolower") == 0)
		tolower_test();
	// if (strcmp(argv1, "strchr"))
	// 	strchr_test();
	// if (strcmp(argv1, "strrchr"))
	// 	strrchr_test();
	// if (strcmp(argv1, "strncmp"))
	// 	strncmp_test();
	// if (strcmp(argv1, "memchr"))
	// 	memchr_test();
	// if (strcmp(argv1, "memcmp"))
	// 	memcmp_test();
	// if (strcmp(argv1, "strnstr"))
	// 	strnstr_test();
	// if (strcmp(argv1, "atoi"))
	// 	atoi_test();
	// if (strcmp(argv1, "calloc"))
	// 	calloc_test();
	// if (strcmp(argv1, "strdup"))
	// 	strdup_test();
	// if (strcmp(argv1, "substr"))
	// 	substr_test();
	// if (strcmp(argv1, "strjoin"))
	// 	strjoin_test();
	// if (strcmp(argv1, "strtrim"))
	// 	strtrim_test();
	// if (strcmp(argv1, "split"))
	// 	split_test();
	// if (strcmp(argv1, "itoa"))
	// 	itoa_test();
	// if (strcmp(argv1, "strmapi"))
	// 	strmapi_test();
	// if (strcmp(argv1, "striteri"))
	// 	striteri_test();
	// if (strcmp(argv1, "putchar_fd"))
	// 	putchar_fd_test();
	// if (strcmp(argv1, "putstr_fd"))
	// 	putstr_fd_test();
	// if (strcmp(argv1, "putendl_fd"))
	// 	putendl_fd_test();
	// if (strcmp(argv1, "putnbr_fd"))
	// 	putnbr_fd_test();
	// else
	// 	error("No function detected");
}