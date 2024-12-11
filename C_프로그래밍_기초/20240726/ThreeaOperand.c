#include <stdio.h>
int main()
{
	int num, abs;
	printf("정수를 입력해. : ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절대값은 %d 이야.", abs);
	return 0;
}