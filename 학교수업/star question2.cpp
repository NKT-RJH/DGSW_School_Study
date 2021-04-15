#include <stdio.h>

int main1()
{
	int i, sum = 1;
	scanf_s("%d", &i);
	while (i >= 1)
	{
		sum *= i;
		i--;
	}

	printf("%d", sum);
	return 0;
}

int main2()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

int main3()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

int main4()
{
	int i, j, k = 9;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		k -= 2;
		printf("\n");
	}

	return 0;
}

int main5()
{
	int i, j, k = 9;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		k -= 2;
		printf("\n");
	}
	k = 3;
	for (i = 4; i > 0; i--)
	{
		for (j = i; j > 1; j--)
		{
			printf(" ");
		}
		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		k += 2;
		printf("\n");
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