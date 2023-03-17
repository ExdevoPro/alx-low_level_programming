#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - this is main function
 *
 * Return: it always returns zero
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n%10;
	if (m>5)
		print("Last digit of %d is %d and is greater than s", n,m);
	else if(m=0)
		printf("last didgit of %d is %d an is zero", n,m);
	else if(m<6 && m !=0)
		printf("last digit of %d and is %d is less tha six and not zero", n, m);
	printf("\n");

	return (0);
}
