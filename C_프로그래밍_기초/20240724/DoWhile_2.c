#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	
	do {
		sum += i;
		i += 2; // 해심 : 짝수만 더할거면 +2 하면되잖아.

	} while (i <= 100);

	printf("결과는 %d \n", sum);

	return 0;
}