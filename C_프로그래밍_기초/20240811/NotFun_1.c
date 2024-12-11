#include<stdio.h>
int max(int num1, int num2, int num3)
{
	if (num1 > num3)
		return num1 > num2 ? (num1) : (num2);
	else
		return num2 > num3 ? (num2) : (num3);
}
int min(int num1, int num2, int num3)
{
	if(num1<num3)
		return num1 < num2 ? (num1) : (num2);
	else
		return num2 < num3 ? (num2) : (num3);
}
int main()
{
	int num1, num2, num3;
	printf("세 가지 정수를 입력해. : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("제일 큰 정수는 %d 이야.", max(num1, num2, num3));
	printf("제일 작은 정수는 %d 이야.", min(num1, num2, num3));
	return 0;
}