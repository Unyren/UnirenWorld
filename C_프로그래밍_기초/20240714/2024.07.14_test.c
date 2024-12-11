#include <stdio.h>
int main()
{
	int num;

	printf("정수입력: ");
	scanf_s("%d", &num);
	num = ~num;
	num = num + 1;
	printf("결과: %d", num);
	return 0;
}