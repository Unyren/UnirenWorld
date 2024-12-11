#include <stdio.h>
#include "base.h"
int main()
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];
	int idx;

	for (i = 1; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			idx = i;
		}
	}
	printf("최댓값은 %d번 인덱스의 %d이야. \n", idx, max);

	int min = arr[0];
	idx = 0;

	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			idx = i;
		}
	}
	printf("최소값은 %d번 인덱스의 %d이야. \n", idx, min);

		int sum = 0;
		for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
		printf("총합은 %d 이야.", sum);

	love();
	return 0;
}

설명

#include <stdio.h>
#include "base.h"
int main()
{
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];
	int idx;
	for (i = 1; i<5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			 idx = i;
		}
	}
	printf("%d번째 인덱스의 최댓값은 %d이야. \n", idx, max);

	int min = arr[0];
	idx=0; //초기화, 위에서 int선언을 했으므로 두번 할필요 없음
	for (i = 1; i< 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			 idx = i;
		}
	}
	printf("%d번째 인덱스의 최소값은 %d이야. \n", idx, min);

	int sum = arr[0];
	{
		for (i = 0; i < 5; i++)
			sum += arr[i];
	}
	printf("배열의 총 합은 %d이야. \n", sum);

	love();
	return 0;
}