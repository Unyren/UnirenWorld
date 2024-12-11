#include <stdio.h>
int main()
{
	int num1, num2;
/*변수 num1,num2의 선언.*/
int num3 = 30, num4 = 40;
/*변수 num3,num4의 선언 밎 초기화*/

//printf("num1:%d,num2:%d\n", num1, num2);_선언만 한 후 값을 주지 않으면 쓰레기 값이 저장
num1 = 10;
num2 = 20;
/*변수 numx의 초기화*/

printf("num1:%d,num2:%d\n", num1, num2);
printf("num3:%d,num4:%d\n", num3, num4);
return 0;
}