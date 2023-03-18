#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char cas[50];
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
	cas = "zero";
	}
	else if (n > 0)
	{
	cas = "positive";
	}
	else 
	{
	cas = "negative";
	}
	printf("%d is %s", n, cas)
	return (0);
}
