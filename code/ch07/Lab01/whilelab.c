#include <stdio.h>
#define MAX 20 

int main(void)
{
	int n = 0;

	while (n <= MAX)
	{
		printf("%4d\n", n);
		n += 3;
	};

	return 0;
}