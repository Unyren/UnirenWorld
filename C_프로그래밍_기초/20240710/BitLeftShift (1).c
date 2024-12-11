#include <stdio.h>
int main()
{
	int num = 15;

	int result1 = num << 1; //num의 비트 열을 왼쪽으로 x칸씩으로 이동
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);

	//왼쪽은 2배, 오른쪽은 절반
	
	return 0;
}