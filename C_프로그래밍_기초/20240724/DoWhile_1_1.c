#include <stdio.h>
int main()
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("정수 입력 해.(0 입력시 종료) : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
}