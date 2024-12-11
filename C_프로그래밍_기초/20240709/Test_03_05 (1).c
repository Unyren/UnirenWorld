#include <stdio.h>
int main()
{
	int num1, num2, num3;
	int result;

	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("값: %d", result);

	return 0;
}