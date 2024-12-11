#include <stdio.h>
#include "base.h"
int main()
{
	char name[255];
	int age;
	float weight;
	double height;
	char what[255];
	printf("이름이 뭐에요?");
	scanf_s("%s",name, sizeof(name));
	printf("몇 살이에요?");
	scanf_s("%d", &age);
	printf("몸무게는 몇 kg이에요?");
	scanf_s("%f", &weight);
	printf("키는 몇 cm이에요?");
	scanf_s("%lf", &height);
	printf("어떤 범죄를 저질렀어요?");
	scanf_s("%s",what, sizeof(what));

	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름 : %s \n", name);
	printf("나이 : %d \n", age);
	printf("몸무게 : %.1f \n", weight);
	printf("키: %.1lf \n", height);
	printf("범죄명 : %s ", what);
    love();
    return 0;
}