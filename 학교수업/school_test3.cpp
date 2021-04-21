#include <stdio.h>

int main1()
{
	int i;
	double n[6], sum = 0;

	printf("체중입력 : ");
	for (i = 0; i < 6; i++)
		scanf("%lf", &n[i]);
	for (i = 0; i < 6; i++)
		sum += n[i];
	printf("평균체중 : %.1lf", sum / 6);
	
	return 0;
}

int main2()
{
	int n[10], i, odd = 0, even = 0;

	printf("입력정수 : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &n[i]);
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			even += n[i - 1];
		else
			odd += n[i - 1];
	}
	printf("odd : %d\neven : %d", odd, even);

	return 0;
}

int main3()
{
	int num, min = 1000, max = -1000;
	while (true)
	{
		scanf("%d", &num);
		if (num > 999 || num < -999)
			continue;
		if (num == 999)
			break;
		if (num <= min)
			min = num;
		if (num >= max)
			max = num;
	}
	printf("max : %d\nmin : %d", max, min);

	return 0;
}

int main4()
{
	int i = -1, n[100], sum1 = 0, sum2 = 0;
	
	printf("입력정수 : ");
	do {
		i++;
		scanf("%d", &n[i]);
		if (n[i] < sum1)
			if (n[i] < 999)
				sum1 = n[i];
		if (n[i] < sum2)
			sum2 = n[i];
	} while (i < 100 && n[i] != 999);
	printf("max : %d\nmin:%d", sum1, sum2);

	return 0;
}

int main5()
{
	int n1, n2, rabbit, chicken;

	scanf("%d %d", &n1, &n2);
	for (rabbit = 0; rabbit < n2 + 1; rabbit++)
	{
		chicken = n2 - rabbit;
		if ((rabbit * 4) + (chicken * 2) == n1)
		{
			printf("토끼 : %d\n닭 : %d", rabbit, chicken);
			break;
		}
	}

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
	printf("\n\n");
	main5();
	
	return 0;
}