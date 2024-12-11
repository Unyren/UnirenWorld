#include "c_hyun.h"
#include <stdio.h>
int Add(int num1,int num2) //인자전달,반환값(O)
{
	return num1 + num2;
}
void showaddresult(int num) //인자전달(O),반환값(X)
{
	printf("덧셈결과 출력 : %d \n", num);
}
int readnum(void) //인자전달(X),반환값(O)
{
	int num;
	scanf_s("%d", &num);
	return num;
}
void HowToUseThisProg(void) //인자전달,반환값(X)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력돼. \n");
	printf("자, 그럼 두 개의 정수를 입력해 봐. \n");
}

int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = readnum();
	num2 = readnum();
	result = Add(num1, num2);
	showaddresult(result);
	return 0;
}