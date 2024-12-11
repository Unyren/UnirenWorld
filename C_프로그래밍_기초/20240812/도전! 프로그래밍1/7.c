#include <stdio.h>
#include "base.h"
int main()
{
	int n;
	int k = 1;
	int cnt = 2;

	scanf_s("%d", &n);

	while (1)
	{
		cnt *= 2;
		k++;
		if (cnt > n)
		{
			break;
		}
			
	}
	printf("k의 최댓값은 %d", k-1);
}