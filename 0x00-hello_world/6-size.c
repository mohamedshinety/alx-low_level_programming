#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C program print size of variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of an int: %u byte(s)", sizeof(int));
	printf("Size of a long: %u byte(s)", sizeof(long));
	printf("Size of a long long: %u byte(s)", sizeof(long long));
	printf("Size of a float: %u byte(s)", sizeof(float));

	return (0);
}
