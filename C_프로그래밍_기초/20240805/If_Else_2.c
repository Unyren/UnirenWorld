#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int num1, num2;

	printf("두 수를 입력해 줘. : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (num1 < num2)
		printf("%d - %d = %d", num2, num1, num2 - num1);

	return 0;
}