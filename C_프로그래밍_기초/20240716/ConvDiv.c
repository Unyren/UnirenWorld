#include <stdio.h>
int main()
{
	int num1 = 3, num2 = 4;
	double 기현;
	기현 = num1 / (double)num2;
	printf("나눗셈 결과: %f \n", 기현);
	return 0;
	//미리 형변환을 적어두면 좋다. ()를 적고 형변환할 실수를 적는다.
}