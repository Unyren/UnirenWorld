#include <stdio.h>
int main()
{
	int num1, num2;
	int result;

	scanf_s("%d %d", &num1, &num2);
	result=num1 - num2;
	printf("뻴샘: %d\n", result);
	scanf_s("%d %d", &num1, &num2);
	result = num1 * num2;
	printf("곱셈: %d", result);

	return 0;
}