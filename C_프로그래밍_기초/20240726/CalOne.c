#include"c_hyun.h"
#include<stdio.h>
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("뭐 선택 할래? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result == num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과는 %f 이야.", result);
	return 0;
}