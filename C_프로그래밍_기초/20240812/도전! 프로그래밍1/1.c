#include <stdio.h>
int main()
{
	int num;
	printf("10 진수 하나를 입력하시오. : ");
	scanf_s("%d", &num);
	printf("16진수로 봐꾸면 : %x", num);
	return 0;
}