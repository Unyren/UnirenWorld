#include <stdio.h>
int main()
{
	int num1, num2, num3;
	int result;

	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("값:%d*%d+%d=%d", num1, num2, num3, result);

	return 0;
}