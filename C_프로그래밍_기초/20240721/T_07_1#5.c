#include <stdio.h>
int main()
{
	int number;
	int number_2;
	int num = 0;
	int sum = 0;

	printf("몇 개의 정수를 입력 할거야? :");
	scanf_s("%d", &number);
	number_2 = number;

	while (number)
	{
		printf("정수 입력해. : ");
		scanf_s("%d", &num);
		sum = sum + num;
		number--;
	}
	printf("총 정수의 평균은 %f 이야.", (double)sum / number_2);

	return 0;

}