#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 * Description: a
 * return: 0 (Success)
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	
	return (0);
}
