#include <stdio.h>
#include "base.h"
int main()
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; );
	{
		total += input;
		printf("실수 입력해.(음수일경우 종료돼.) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total / (num - 1));
	return 0;
}