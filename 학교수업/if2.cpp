#include <stdio.h>

int main1()
{
	if (/*������ ��� ������ �̿�� �� ���� ��ü�� ���� ����� �������� ��µǴ� ��*/)
	{
		/*���ǽ��� ���� �� ����Ǵ� ��ɹ�*/
	}
	else {
		/*���ǽ��� ������ �� ����Ǵ� ��ɹ� �� ��� �� �� ����� ����Ǿ�� ��*/
	}

	return 0;
}

int main2()
{
	int x;
	printf("���� : ");
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

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 80)
		printf("�����մϴ�. �հ��Դϴ�.\n");
	else
		printf("�˼��մϴ�. ���հ��Դϴ�.\n");

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