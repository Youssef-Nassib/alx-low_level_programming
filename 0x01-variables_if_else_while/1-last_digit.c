#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -main function
 *
 * Return:always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is grater than 5", n, m);
	else if (m < 5)
		printf("last digit of %d is %d and is less than 5", n, m);
	else if (m == 0)
		printf("the last digit of %d  is zero", n);
	printf("\n");
	return (0);
}