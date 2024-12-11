#include <stdio.h>
int main()
{
	int num;
	printf("아무 숫자나 입력해봐. 인간.: ");
	scanf_s("%d", &num);

	while (num)
	{
		printf("Hello World! \n");
		num--;
	}
	return 0;
}