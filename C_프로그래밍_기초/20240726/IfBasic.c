#include "c_hyun.h"
#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력해. 윤아. : ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값이 0보다 작아. \n");
	if (num > 0)
		printf("입력 값이 0보다 커. \n");
	if (num == 0)
		printf("입력 값은 0 이야. \n");
	return 0;
}