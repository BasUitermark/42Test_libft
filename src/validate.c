#include "test42_libft.h"

/**
 * It prints a green or red OK or KO depending on the value of the boolean parameter
 * 
 * @param correct a boolean value that indicates whether the test passed or failed.
 * @param test_num the number of the test
 */
void	validate(bool correct, int test_num)
{
	if (correct)
		printf(GREEN "%d. OK |" RESET, test_num);
	else
		printf(RED "%d. KO |" RESET, test_num);
}
