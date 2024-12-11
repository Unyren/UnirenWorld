#include <stdio.h>
int main()
{
	int num1;
	int	num2;
	int result1, result2, result3, result4, result5;

	scanf_s("%d %d", &num1, &num2);
	result1 = num1 + num2;
	printf("윤+현:%d", result1);

	//scanf_s("%d %d", &num1, &num2);
	result2 = num1 - num2;
	printf("윤-현:%d", result2);

	//scanf_s("%d %d", &num1, &num2);
	result3 = num1 * num2;
	printf("윤*현:%d", result3);

	//scanf_s("%d %d", &num1, &num2);
	result4 = num1 / num2;
	printf("윤나누기현:%d", result4);

	//scanf_s("%d %d", &num1, &num2);
	result5 = num1 % num2;
	printf("윤현 나머지:%d", result5);

	return 0;

	/*스켄에프에 넣을 정수는 ,를 넣어 나열해야한다.*/
	//코드 최적화 (중복을 줄이는것이 좋다.)
}