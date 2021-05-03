#include <stdio.h>

int main1()
{
	int i, var[5], max = -1;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프C 성적 : ", i + 1);
		scanf("%d", &var[i]);
		if (var[i] > max)
			max = var[i];
	}
	printf("최고 점수 : %d", max);

	return 0;
}

int main2()
{
	int i, var[5], max = -1;

	printf("입력 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &var[i]);
		if (var[i] > max)
			max = var[i];
	}
	for (i = 0; i < 5; i++)
		printf("%d ", var[i]);
	printf("\n최대값 : %d", max);

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
	printf("평균 : %.2lf", avg / 3);

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