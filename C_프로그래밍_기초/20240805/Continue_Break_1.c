#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int dan = 1;
	int num = 1;
	for (dan=1; dan < 10; dan++)
	{
		if (dan % 2 != 0)
			continue;
		for (num=1; num < 10; num++)
		{
			if (num > dan)
				break;
			printf("%d x %d = %d \n", dan, num, dan * num);
		}
		printf("\n");
	}
	return 0;
}
//변수가 2개 이상일경우 칸에 꼭 적을 것.