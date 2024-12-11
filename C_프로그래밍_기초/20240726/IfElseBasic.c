#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int num;
	printf("정수를 입력해.: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작아. \n");
	if (num > 0)
		printf("입력 값은 0보다 커. \n");

	return 0;
}