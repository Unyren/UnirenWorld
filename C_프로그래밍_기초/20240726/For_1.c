#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int sum=0;

	printf("정수 두 가지 입력해. : ");
	scanf_s("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
	{
		sum += num1;
	}
	printf("값 : %d", sum);
	return 0;
}