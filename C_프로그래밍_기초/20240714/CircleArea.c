#include <stdio.h>
int main()
{
	double 기현;
	double 햄스틴;
	printf("원의 반지름 입력: ");
	scanf_s("%lf", &기현);

	햄스틴 = 기현 * 기현 * 3.1415;
	printf("원의 넓이: %f \n", 햄스틴);
	return 0;
}