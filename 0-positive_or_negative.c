#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
/**
*main - main work
*
*Return: 0 if successfull
*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if(n > 0)
printf("%d is positive", n);
else if(n == 0)
printf("%d is zero"' n);
else if(n < 0", n)
printf("\n");
	return (0);
}
