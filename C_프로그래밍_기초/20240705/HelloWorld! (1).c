#include<stdio.h>
/*헤더파일 선언문_main 함수 정의 이전에 나와야 한다.*/
int main(void)
/*먼저 호출되는 함수_main*/
/*int_출력형태 main_함수이름 (void)_입력형태,안에 영어 생략 가능.*/
{
	printf("Hello World! \n");
	/*전달되는 문자열을 모니터에 출력하는 기능*/
	return 0;
	/*함수를 호출한 영역으로 값을 전달,현재 실행중인 함수의 종료.
	main 함수를 호출한 영역으로 0을 전달. 즉 프로그램 종료.
	return문*/
}
/*함수의 몸체*/