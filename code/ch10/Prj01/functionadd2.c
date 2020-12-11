#include <stdio.h>

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);

	int sum = add2(a, b);
	printf("гу: %d", sum);

	return 0;
}

int add2(int a, int b)
{
	int sum = a + b;

	return (sum);
}

int findmin2(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
