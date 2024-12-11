#include <stdio.h>
int main()
{
	int num = 0;
	int event = 0;
	int sum = 0;

	while (event < 5)
	{   printf("5가지 정수를 입력해: ");
		scanf_s("%d", &num);
		while (num<1)
		{
			printf("틀렸어. 다시입력해줘. :");
			scanf_s("%d", &num);
		}
		sum += num;
		event++;
	}
	printf("정답은 %d 이야.", sum);
	return 0;
}