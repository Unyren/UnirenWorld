#include <stdio.h>
int main()
{
	int n;
	int sum = 1;
	printf("정수를 입력해. : ");
	scanf_s("%d", &n);
	for (; n> 0; n--)
	{
		sum *= n;
	}
	printf("값 : %d", sum);
	return 0;
}