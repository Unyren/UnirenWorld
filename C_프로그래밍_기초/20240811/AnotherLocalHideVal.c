#include<stdio.h>
int main()
{
	int num = 1;

	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
}

//8번 라인 주석 처리 유뮤에 따라 다름.