#include <stdio.h>

int main(void)
{
	const int MAX = 15;

	printf("1에서 %d까지 중에서 5으로 나누어 떨어지지 않는 수\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 5 == 0)
			continue;
		printf("%3d", i);

	}
	puts("");

	return 0;
}