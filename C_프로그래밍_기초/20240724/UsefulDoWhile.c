#include <stdio.h>
int main()
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력 해.(0 입력시 종료) : ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0); //!=은 not
	printf("합계: %d \n", total);
	return 0;
}