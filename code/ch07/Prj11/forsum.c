#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++) 
	{
		sum += i;
		printf("1���� 0���� ��: %3d\n", sum);
	}
}