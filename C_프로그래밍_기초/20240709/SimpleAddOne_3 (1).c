#include <stdio.h>
int main()
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1); 
	printf("정수 two: ");
	scanf_s("%d", &num2);

	/*비쥬얼 스튜디오에서는 scanf_s이다.*/

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);

	return 0;
}