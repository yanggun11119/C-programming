#include <stdio.h>

double sum(double data[][3], int, int);
void printarray(double data[][3], int, int);

int main(void)
{
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };

	int row = sizeof(x) / sizeof(x[0]);
	int col = sizeof(x[0]) / sizeof(x[0][0]);
	printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(x, row, col);
	printf("2���� �迭 �������� %.3lf �Դϴ�.\n", sum(x, row, col));

	return 0;
}

double sum(double(*data)[3], int row, int col)
{
	double total = 0;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			total += data[i][j];

	return total;
}

void printarray(double(*data)[3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("% d����� ", i + 1);
		for (int j=0;j<col;j++)
			printf("x[%d][%d] = %5.2lf	", i, j, data[i][j]);
		printf("\n");
	}
	printf("\n");
}