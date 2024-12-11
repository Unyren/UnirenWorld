#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int age;

	printf("나이를 입력 해. : ");
	scanf_s("%d", &age);

	if (age < 10)
		age = 9;
	else if (age < 20)
		age = 19;
	else if (age < 30)
		age = 29;
	switch (age)
	{
	case 9:
		printf("0이상 10미만");
		break;
	case 19:
		printf("10 이상 20미만");
		break;
	case 29:
		printf("20이상 30미만");
		break;
	default:
		printf("30 이상. 늙었네.");
	}
	return 0;
}