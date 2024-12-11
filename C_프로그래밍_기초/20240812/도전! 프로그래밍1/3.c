#include <stdio.h>
#include "base.h"
int gcd(int num1, int num2)
{
	int max;
	if (num1 > num2)
	{
		for (int i = 1; i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				max = i;
			}
		}
	}
	else if (num1 < num2)
	{
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				max = i;
			}
		}
	}
	return max;
}
int main()
{
	int num1, num2, result;
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	result = gcd(num1, num2);
	printf("최대공약수 : %d", result);
	return 0;
}