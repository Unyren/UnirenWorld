#include <stdio.h>
#define true 1
#define false 0

int main(void) {
	int select;

	while (true) {
		printf("\n 1~4까지의 숫자를 입력하고 엔터를 눌러주세요 =>");
		scanf_s("%d", &select);

		switch (select) {
		case 1: 
			printf("1번 : 윤이 사랑해~ \n"); break;

		case 2:
			printf("2번 : 윤이 좋아해~ \n"); break;

		case 3:
			printf("3번 : 윤이 먹어버릴까~ \n"); break;

		case 4:
			printf("4번 : 윤이 내꺼~ \n"); break;

		default:
			printf("1~4번만 눌러라 ^^+ \n"); break;
		}

		if (select != 1 && select != 2 && select != 3 && select != 4) {
			break;
		}
	}

	printf("번호를 잘못 입력해서 프로그램 종료할게요 ^^ \n");

	return 0;
	

}