#include<stdio.h>
int CelToFah(int cel)
{
	return 1.8 * cel + 32;
}
int FahToCel(int fah)
{
	return 1.8 * (fah - 32);
}
int main()
{
	int num; int cel; int fah;
	printf("구할 식을 골라.\n");
	printf("1.섭씨에서화씨로. 2.화씨에서섭씨로\n");
	printf("입력 : ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		printf("몇 도? ");
		scanf_s("%d",&cel);
		printf("답은 화씨 %d 이야.", CelToFah(cel));
		return 0;
	}
	else
	{
		printf("몇 도? ");
		scanf_s("%d", &fah);
		printf("답은 섭씨 %d 이야.", FahToCel(fah));
		return 0;
	}
}