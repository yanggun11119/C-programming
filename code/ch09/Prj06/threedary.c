#include <stdio.h>
#define ROW 4
#define COL 2
int main(void)
{
	int score[][ROW][COL] = {
		{{95,85},
		{85,83},
		{92,75},
		{90,88}},
		{{88,77},
		{72,95},
		{88,92},
		{93,83}}
	};

	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
			printf("[°­ÁÂ 1]");
		else printf("[°­ÁÂ 2]");
		printf("%11s%7s\n", "Áß°£", "±â¸»");

		for (int j = 0; j < ROW; j++)
		{
			printf("%10s%2d", "ÇÐ»ý", j + 1);
			for (int k = 0; k < COL; k++)
				printf("%6d ", score[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
