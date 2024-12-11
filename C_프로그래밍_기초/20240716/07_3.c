#include <stdio.h>
int main() {
	int num = 1;
	int result = 0;

	while (num != 0) {
		printf("정수 입력(0 입력시 종료됨) =>");
		scanf_s("%d", &num);

		result = result + num;
	}

	printf("결과값 = %d \n", result);

	return 0;
}