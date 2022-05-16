#include "test42_libft.h"

void	isalpha_test(void)
{
	int	testnum;

	testnum = 1;
	printf("\n//==================================//\n");
	printf("//====      ft_isalpha test     ====//\n");
	printf("//==================================//\n");
	// #1
	if (ft_isalpha('a') && isalpha('a'))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #2
	if (!ft_isalpha('a' - 1) && !isalpha('a' - 1))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #3
	if (ft_isalpha('z') && isalpha('z'))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #4
	if (!ft_isalpha('z' + 1) && !isalpha('z' + 1))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #5
	if (ft_isalpha('A') && isalpha('A'))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #6
	if (!ft_isalpha('A' - 1) && !isalpha('A' - 1))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #7
	if (ft_isalpha('Z') && isalpha('Z'))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #8
	if (!ft_isalpha('Z' + 1) && !isalpha('Z' + 1))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #9
	if (!ft_isalpha('0') && !isalpha('0'))
		printf(GREEN "%d. OK |" RESET, testnum++);
	else
		printf(RED "%d. KO |" RESET, testnum++);

	// #10
	if (!ft_isalpha('9') && !isalpha('9'))
		printf(GREEN "%d. OK |\n" RESET, testnum++);
	else
		printf(RED "%d. KO |\n" RESET, testnum++);

}

void	isdigit_test(void)
{
	int	testnum;

	testnum = 1;
	printf("\n//==================================//\n");
	printf("//====      ft_isdigit test     ====//\n");
	printf("//==================================//\n");
	// #1
	if (ft_isdigit('0')&& isdigit('0'))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #2
	if (!ft_isdigit('0' - 1) && !isdigit('0' - 1))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #3
	if (ft_isdigit('9')&& isdigit('9'))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #4
	if (!ft_isdigit('9' + 1) && !isdigit('9' + 1))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #5
	if (!ft_isdigit('A') && !isdigit('A'))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #6
	if (!ft_isdigit('a') && !isdigit('a'))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #7
	if (!ft_isdigit('Z') && !isdigit('Z'))
		printf(GREEN "%d. OK |" RESET, testnum++);

	// #8
	if (!ft_isdigit('z') && !isdigit('z' ))
		printf(GREEN "%d. OK |" RESET, testnum++);
}

void	isalnum_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	isascii_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	isprint_test(void)
{
	error("UNDER CONSTRUCTION!\n");
}

void	strlen_test(void)
{
	error("UNDER CONSTRUCTION!\n");
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
	// isalnum_test();
	// isascii_test();
	// isprint_test();
	// strlen_test();
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