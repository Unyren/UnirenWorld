#include <stdio.h>
int main()
{
	int total = 0, num = 0;

	printf("정수 입력 해.(0 입력시 종료) : ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		total += num;
		printf("정수 입력 해.(0 입력시 종료) : ");
		scanf_s("%d", &num);
	}
	printf("합계: %d \n", total);
	return 0;
}

//do while 을 while로 변경했을때 부자연스러움.