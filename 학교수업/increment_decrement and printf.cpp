#include <stdio.h>

int main1()
{
	int a = 10, b = 10;

	printf("���ʰ� a = %d, b = %d\n\n\n", a, b);
	printf("a++ = %d, ++b = %d\n", a++, ++b);
	printf("������ a = %d, b = %d\n\n\n", a, b);
	printf("a-- = %d, --b = %d\n", a--, --b);
	printf("������ a = %d, b = %d\n", a, b);

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
	char n1[100] = "���� ����� ���� ����ǥ�� �����մϴ�.";
	printf("%s\n", n1);
	printf("123\n6.500000\n68.600000\n10 + 5 = 15\n�� ������ 2005�� 03�� 18���Դϴ�.");
	return 0;
}

int main4()
{
	int a;
	scanf_s("%d", &a);
	printf("%d�ʴ� %d�� %d���Դϴ�.", a, a / 60, a % 60);
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