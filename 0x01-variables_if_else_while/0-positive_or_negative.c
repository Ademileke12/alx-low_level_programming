#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry Point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	printf("%d" , n);
	return (0);
}
