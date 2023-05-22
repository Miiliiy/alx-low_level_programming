#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
* main - main function to generate a random number
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int n;
	
	srand(time(0))
	n = rand() - RAND_MAX / 2

	if (n > 0)
	{
		printf("%d ls postive\n", n)
	}
	else if (n == 0)
	{
		printf("%d ls zero\n", n)
	}
	else if (n < 0)
	{
		printf("%d ls negative\n", n);
	}
	return (0);
}
