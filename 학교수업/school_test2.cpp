#include <stdio.h>

int main1()
{
	int i, j, k = 7;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j < k; j++)
		{
			if (j == 0 || j == k - 1)
				printf("*");
			else
				printf(" ");
		}
		k -= 2;
		printf("\n");
	}
	k += 4;
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j > i; j--)
			printf(" ");
		for (j = 0; j < k; j++)
		{
			if (j == 0 || j == k - 1)
				printf("*");
			else
				printf(" ");
		}
		k += 2;
		printf("\n");
	}

	return 0;
}

int main2()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 4; j++)
			printf("%d * %d = %2d  ", j, i, j * i);
		printf("\n");
	}

	return 0;
}

int main3()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("(%d, %d) ", i, j);
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

	return 0;
}