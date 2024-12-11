#include <stdio.h>
#include "base.h"
int main()
{
	char arr[240];
	int idx;
	scanf_s("%s", arr, (int)sizeof(arr));
	char max = arr[0];
	for (idx = 1; arr[idx] != '\0'; idx++)
	{
		if (max < arr[idx])
		{
			max = arr[idx];
		}
	}
	printf("%c", max);
	love();
	return 0;
}