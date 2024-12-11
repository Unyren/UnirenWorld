#include <stdio.h>
int main()
{
	int num1, num2;
	int result1, result2;

	scanf_s("%d %d", &num1, &num2);
	result1 = num1 / num2;
	result2 = num1 % num2;
	printf("값: %d", result1);
	printf("나머지: %d", result2);

	return 0;
}