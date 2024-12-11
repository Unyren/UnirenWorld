#include <stdio.h>
int main()
{
	int num = 3;
	int num2;
	int num3 = 1;

	printf("아무 숫자나 써 봐, 주인.: ");
	scanf_s("%d", &num2);

	while (num2)
	{
		printf("%d x %d = %d \n", num, num3, num*num3);
		num2--;
		num3++;
	}
	return 0;
}