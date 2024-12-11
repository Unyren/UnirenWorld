#include <stdio.h>
#include "base.h"
int main()
{
	int total = 0;
	int i, num;
	printf("1부터 num까지 의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지 덧셈결과: %d \n", num, total);
	love();
	return 0;
}