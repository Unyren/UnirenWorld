#include <stdio.h>
int main()
{
	char str[50];
	int idx = 0;

	unsigned int size = sizeof(str);    // sizeof로 str 변수의 크기 선언 
	printf("str의 크기 : %d \n", size); // str 변수의 크기 확인

	printf("문자열 입력 : ");
	// scanf_s("%s", str); //문자열을 입력 받아서 배열 str에 저장!                                  =>   현재 버전에서는 사용하지 않음
	scanf_s("%s", str, size); // 비쥬얼 스튜디오 버전이 올라감에 따라, scanf_s의 형식이 바뀌었다!	=>	 3번째 매개변수에 문자열의 크기를 입력해줘야 동작한다.




	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}