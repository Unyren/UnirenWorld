#include <stdio.h>
int main()
{
	char *shop[3][4] = {
		{"1. 코딩우유","2. 자바커피","3. 자바쥬스","4. 비타민C언어스파클링"},
		{"5. 메모리칩","6. 인칩","7. C칩","8. 자바칩"},
		{"9. 안타볼","10. 초코버섯","11. 오징어깡","12. 씨언어리얼"}
	};
	int num;
	printf("C언어 u");
	printf("마루:어서오세요. c언어 u입니다. 몇번 상품을 구매하시겠습니까?");
	printf("1~12");

	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		for (int j = 0; j < 4; j++)
		{
			printf("%-12s",shop[i][j]);
		}
	}
	printf("\n");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1: {
		printf("마루: 구매하신 상품은 코딩우유입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 2: {
		printf("마루: 구매하신 상품은 자바커피입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 3: {
		printf("마루: 구매하신 상품은 자바쥬스 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 4: {
		printf("마루: 구매하신 상품은 비타민C언어스파클링 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 5: {
		printf("마루: 구매하신 상품은 메모리칩 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 6: {
		printf("마루: 구매하신 상품은 인칩 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 7: {
		printf("마루: 구매하신 상품은 C칩 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 8: {
		printf("마루: 구매하신 상품은 자바칩 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 9: {
		printf("마루: 구매하신 상품은 안타볼 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 10: {
		printf("마루: 구매하신 상품은 초코버섯 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 11: {
		printf("마루: 구매하신 상품은 오징어깡 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}

	case 12: {
		printf("마루: 구매하신 상품은 씨언어리얼 입니다.\n이용해 주셔서 감사합니다.");
		break;
	}
	default:
		printf("마루:나가.");
		break;
	}
	return 0;
}	