#include "test42_libft.h"

void	isalpha_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_isalpha	]\n"RESET);
	// #1
	validate(ft_isalpha('a'), test_num++);
	// #2
	validate(!ft_isalpha('a' - 1), test_num++);
	// #3
	validate(ft_isalpha('z'), test_num++);
	// #4
	validate(!ft_isalpha('z' + 1), test_num++);
	// #5
	validate(ft_isalpha('A'), test_num++);
	// #6
	validate(!ft_isalpha('A' - 1), test_num++);
	// #7
	validate(ft_isalpha('Z'), test_num++);
	// #8
	validate(!ft_isalpha('Z' + 1), test_num++);
	// #9
	validate(!ft_isalpha('0'), test_num++);
	// #10
	validate(!ft_isalpha('9'), test_num++);
	printf("\n");
}

void	isdigit_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_isdigit	]\n"RESET);
	// #1
	validate(ft_isdigit('0'), test_num++);
	// #2
	validate(!ft_isdigit('0' - 1), test_num++);
	// #3
	validate(ft_isdigit('9'), test_num++);
	// #4
	validate(!ft_isdigit('9' + 1), test_num++);
	// #5
	validate(!ft_isdigit('a'), test_num++);
	// #6
	validate(!ft_isdigit('a' + 1), test_num++);
	// #7
	validate(!ft_isdigit('z'), test_num++);
	// #8
	validate(!ft_isdigit('z' + 1), test_num++);
	printf("\n");
}

void	isalnum_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_isalnum	]\n"RESET);

	// #1
	validate(ft_isalnum('a'), test_num++);
	// #2
	validate(!ft_isalnum('a' - 1), test_num++);
	// #3
	validate(ft_isalnum('z'), test_num++);
	// #4
	validate(!ft_isalnum('z' + 1), test_num++);
	// #5
	validate(ft_isalnum('A'), test_num++);
	// #6
	validate(!ft_isalnum('A' - 1), test_num++);
	// #7
	validate(ft_isalnum('Z'), test_num++);
	// #8
	validate(!ft_isalnum('Z' + 1), test_num++);
	// #9
	validate(ft_isalnum('0'), test_num++);
	// #10
	validate(!ft_isalnum('0' - 1), test_num++);
	// #11
	validate(ft_isalnum('9'), test_num++);
	// #12
	validate(!ft_isalnum('9' + 1), test_num++);
	printf("\n");
}

void	isascii_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_isascii	]\n"RESET);
	// #1
	validate(ft_isascii(0), test_num++);
	// #2
	validate(ft_isascii(127), test_num++);
	// #3
	validate(!ft_isascii(0 - 1), test_num++);
	// #4
	validate(!ft_isascii(127 + 1), test_num++);
	printf("\n");
}

void	isprint_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_isprint	]\n"RESET);
	// #1
	validate(ft_isprint(32), test_num++);
	// #2
	validate(ft_isprint(126), test_num++);
	// #3
	validate(!ft_isprint(32 - 1), test_num++);
	// #4
	validate(!ft_isprint(126 + 1), test_num++);
	printf("\n");
}

void	strlen_test(void)
{
	int	test_num;

	test_num = 1;
	printf(BOLD MAGENTA"\n[	ft_strlen	]\n"RESET);
	// #1
	validate(ft_strlen("55555") == 5, test_num++);
	// #2
	validate(ft_strlen("") == 0, test_num++);
	// #3
	validate(ft_strlen("\n\n\f\r\t") == 5, test_num++);
	printf("\n");
}

void	memset_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	bzero_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	memcpy_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	memmove_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	strlcpy_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	strlcat_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	toupper_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	tolower_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}


void	run_mandatory(void)
{
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	strlen_test();
	// memset_test();
	// bzero_test();
	// memcpy_test();
	// memmove_test();
	// strlcpy_test();
	// strlcat_test();
	// toupper_test();
	// tolower_test();
	// strchr_test();
	// strrchr_test();
	// strncmp_test();
	// memchr_test();
	// memcmp_test();
	// strnstr_test();
	// atoi_test();
	// calloc_test();
	// strdup_test();
	// substr_test();
	// strjoin_test();
	// strtrim_test();
	// split_test();
	// itoa_test();
	// strmapi_test();
	// striteri_test();
	// putchar_fd_test();
	// putstr_fd_test();
	// putendl_fd_test();
	// putnbr_fd_test();
	exit(EXIT_SUCCESS);
}