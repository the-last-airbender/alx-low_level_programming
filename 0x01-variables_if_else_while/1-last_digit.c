#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);

	} else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	} else if (lastDigit < 0 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}

	/* your code goes there */

	return (0);

}
