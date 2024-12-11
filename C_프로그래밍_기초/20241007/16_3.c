#include <stdio.h>
#include "base.h"

int main()
{
	int arr[5][5];
	int i, j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
		arr[i][j] = sum;
	}
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += arr[j][i];
		}
		arr[j][i] = sum;
	}
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	love();
	return 0;
}