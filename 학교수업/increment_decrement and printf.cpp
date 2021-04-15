#include <stdio.h>

int main1()
{
	int a = 10, b = 10;

	printf("최초값 a = %d, b = %d\n\n\n", a, b);
	printf("a++ = %d, ++b = %d\n", a++, ++b);
	printf("실행후 a = %d, b = %d\n\n\n", a, b);
	printf("a-- = %d, --b = %d\n", a--, --b);
	printf("실행후 a = %d, b = %d\n", a, b);

	return 0;
}

int main2()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	a += 100;
	b %= 10;
	printf("%d %d", a, b);
	return 0;
}

int main3()
{
	char n1[100] = "수를 출력할 때는 따옴표를 생략합니다.";
	printf("%s\n", n1);
	printf("123\n6.500000\n68.600000\n10 + 5 = 15\n내 생일은 2005년 03월 18일입니다.");
	return 0;
}

int main4()
{
	int a;
	scanf_s("%d", &a);
	printf("%d초는 %d분 %d초입니다.", a, a / 60, a % 60);
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