#include <stdio.h>
#include "base.h"
int main()
{
	int arr[10];
	int i;
	int j = 0;
	int k = 9;
	int num;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &num);

		if (num%2!=0)
		{
			arr[j] = num;
			j++;
		}
		else
		{
			arr[k] = num;
			k--;
		}
	}
	for (i = 0; i < 10; i++)
	printf("출력값 : %d \n", arr[i]);
	printf("\n");
	
	love();
	return 0;
}