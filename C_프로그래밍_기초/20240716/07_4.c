#include <stdio.h>
int main()
{
	int num = 0;
	int num2 = 9;

	printf("입력할 단을 입력 하시오. : ");
	scanf_s("%d", &num);
	
	while (num2)
	{
		printf("%d x %d = %d \n", num, num2, num*num2);
		num2--;
	}
	return 0;
}