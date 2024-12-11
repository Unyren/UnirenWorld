#include "c_hyun.h"
#include <stdio.h>
int main()
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력 해. : ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case'A':
	case'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case'e':
		printf("Evening \n");
		break; //사실 불필요한 break문!
	}
	return 0;
}