#include <stdio.h>
#include "base.h"
int main()
{
	int cycle = 0, count = 0;

	for (int num = 2; cycle != 10; num++) //10번 반복할거다.
	{
		count = 0;
		for (int i = 1; i <= num; i++) //실수는 자기자신과 1로만 나눌수만 있으므로 자기자신보다 클 수 없다.
		{
			if (num % i == 0)
			{ 
				count++;
			}	
		}
		if (count == 2) //실수는 자기자신과 1 합해서 2를 넘을 수 없다.
		{
			printf("%d\n", num);
			cycle++; //루프1추가
		}

	}

}
//포문과 이프 조건부를 잘 이용하자.
//괄호문좀 정리를 잘하자...