#include <stdio.h>
int main()
{
	int ascii;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &ascii);
	printf("아스키 문자: %c \n", ascii);

	return 0;
	//아스키 코드는 65부터 시작한다!(멍청하게 65이하 정수 적어서 안나왔던것이다...)
}