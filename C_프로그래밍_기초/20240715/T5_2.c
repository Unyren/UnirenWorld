#include <stdio.h>
int main()
{
	double 기현_1;
	double 기현_2;
	double 덧셈, 뻴셈, 곱셈, 나눗셈;
	
	printf("두 개의 실수를 입력하세요.: ");
	scanf_s("%lf", &기현_1);
	scanf_s("%lf", &기현_2);

	덧셈 = 기현_1 + 기현_2;
	뻴셈 = 기현_1 - 기현_2;
	곱셈 = 기현_1 * 기현_2;
	나눗셈 = 기현_1 / 기현_2;

	printf("두 개의 실수의 더한 값: %f \n", 덧셈);
	printf("두 개의 실수의 남은 값: %f \n", 뻴셈);
	printf("두 개의 실수의 곱한 값: %f \n", 곱셈);
	printf("두 개의 실수의 나눈 값: %f \n", 나눗셈);

	return 0;
}