#include <stdio.h>
#define ROW 4
#define COL 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;

	int score[][COL] = { 95,85,90,88,86,90,88,78 };

	printf("	�߰�	�⸻\n");
	printf("------------------------------------------\n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%10d ", score[i][j]);
			sum += score[i][j];
			if (j == 0)
				midsum += score[i][j];
			else
				finalsum += score[i][j];
		}
		puts("");
	}

	printf("------------------------------------------\n");
	printf("���: %7.2f %7.2f\n", (double)midsum / ROW, (double)finalsum/ROW);
	printf("\n������ ���� %d�̰� ", sum);
	printf("����� %.2f�̴�.\n", (double)sum / (ROW * COL));

	return 0;
}