#include <stdio.h>
#include "base.h"
int func(int num)
{
	if (num == 1) return 2;
		return 2 * func(num - 1);
}

int main()
{
	int num;
	scanf_s("%d", &num);

	int result = func(num);
	printf("2의 %d 제곱은 %d",num, result);
}