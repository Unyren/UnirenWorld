#include <stdio.h>
#define true 1
#define false 0

int main(void) {
	int select;

	while (true) {
		printf("\n 1~4������ ���ڸ� �Է��ϰ� ���͸� �����ּ��� =>");
		scanf_s("%d", &select);

		switch (select) {
		case 1: 
			printf("1�� : ���� �����~ \n"); break;

		case 2:
			printf("2�� : ���� ������~ \n"); break;

		case 3:
			printf("3�� : ���� �Ծ������~ \n"); break;

		case 4:
			printf("4�� : ���� ����~ \n"); break;

		default:
			printf("1~4���� ������ ^^+ \n"); break;
		}

		if (select != 1 && select != 2 && select != 3 && select != 4) {
			break;
		}
	}

	printf("��ȣ�� �߸� �Է��ؼ� ���α׷� �����ҰԿ� ^^ \n");

	return 0;
	

}