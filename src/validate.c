#include "test42_libft.h"

void	validate(bool correct, int test_num)
{
	if (correct)
		printf(GREEN "%d. OK |" RESET, test_num);
	else
		printf(RED "%d. KO |" RESET, test_num);
}