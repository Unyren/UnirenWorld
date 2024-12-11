#include <stdio.h>
	void gugu(int num1,int num2)
{
	if (num1 < num2)
	{
		for (num1; num1 <= num2; num1++)
		{
			int i = 1;
			for (i = 1; i < 10; i++)
			{
				printf("%d x %d = %d\n", num1, i, num1 * i);
			}
			printf("\n");
		}
	}
	else if (num2 < num1)
	{
		for (num2; num2 <= num1; num2++)
		{
			int i = 1;
			for (i = 1; i < 10; i++)
			{
				printf("%d x %d = %d\n", num2, i, num2 * i);
			}
			printf("\n");
		}
	}
}

int main()
{
	int num1;
	int num2;
	printf("두 개의 정수를 입력 하시오. : ");
	scanf_s("%d %d", &num1, &num2);
	gugu(num1, num2);
	return 0;
}