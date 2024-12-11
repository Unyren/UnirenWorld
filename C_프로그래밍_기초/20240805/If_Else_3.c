#include "c_hyun.h"
#include <stdio.h>
int main()
{
	int 국어, 영어, 수학;
	int result;
	printf("세가지 과목 점수를 다 입력해. : ");
	scanf_s("%d %d %d", &국어, &영어, &수학);
	result = (국어 + 영어 + 수학) / 3;

	if (result >= 90)
		printf("너의 평균은 %d 이므로 성적은 A 이야. 재법인데?", result);
	else if (result >= 80)
		printf("너의 평균은 %d 이므로 성적은 B 이야. 참 잘했어", result);
	else if (result >= 70)
		printf("너의 평균은 %d 이므로 성적은 C 이야. 평범하네.", result);
	else if (result >= 50)
		printf("너의 평균은 %d 이므로 성적은 D 이야. 노력하자.", result);
	else
		printf("너의 평균은 %d 이므로 성적은 F 이야. 공부 한 거 맞아?", result);

	return 0;
}
//소수점 출력_%.자리수숫자f