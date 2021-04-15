#include <stdio.h>

int main1()
{
	if (/*변수와 산술 연산자 이용식 등 논리값 자체와 연산 결과가 논리값으로 출력되는 식*/)
	{
		/*조건식이 참일 때 실행되는 명령문*/
	}
	else {
		/*조건식이 거짓일 때 실행되는 명령문 두 블록 중 한 블록이 실행되어야 함*/
	}

	return 0;
}

int main2()
{
	int x;
	printf("점수 : ");
	scanf_s("%d", &x);
	if (x > 90 && x <= 100)
		printf("A");
	if (x > 80 && x <= 90)
		printf("B");
	if (x > 70 && x <= 80)
		printf("C");
	if (x > 0 && x <= 70)
		printf("F");

	return 0;
}

int main3()
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 80)
		printf("축하합니다. 합격입니다.\n");
	else
		printf("죄송합니다. 불합격입니다.\n");

	return 0;
}

int main4()
{
	int a, b;

	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("%d\n", a - b);
	else
		printf("%d\n", b - a);

	return 0;
}

int main()
{
	main1();
	printf("\n\n");
	main2();
	printf("\n\n");
	main3();
	printf("\n\n");
	main4();

	return 0;
}