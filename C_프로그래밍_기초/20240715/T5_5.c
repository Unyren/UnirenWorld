#include <stdio.h>
int main()
{
	char ascii;
	printf("문자를 입력하세요: ");
	scanf_s("%c", &ascii);
	printf("아스키 코드: %d \n", ascii);

	return 0;
}