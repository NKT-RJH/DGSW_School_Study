#include <stdio.h>

int main1()
{
	int i, var[5], max = -1;

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ��C ���� : ", i + 1);
		scanf("%d", &var[i]);
		if (var[i] > max)
			max = var[i];
	}
	printf("�ְ� ���� : %d", max);

	return 0;
}

int main2()
{
	int i, var[5], max = -1;

	printf("�Է� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &var[i]);
		if (var[i] > max)
			max = var[i];
	}
	for (i = 0; i < 5; i++)
		printf("%d ", var[i]);
	printf("\n�ִ밪 : %d", max);

	return 0;
}

int main3()
{
	int count, i;
	double var, avg = 0;
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%lf", &var);
		avg += var;
	}
	printf("��� : %.2lf", avg / 3);

	return 0;
}

int main()
{
	main1();
	printf("\n\n");
	main2();
	printf("\n\n");
	main3();

	return 0;
}