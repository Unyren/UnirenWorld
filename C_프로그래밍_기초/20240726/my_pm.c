#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	printf("정수를 하나 입력해. : ");
	scanf_s("%d", &num);

	for (; num > 0; num -= 2)
	{
		sum += num;
	}
	printf("값 :%d", sum);
	return 0;
}