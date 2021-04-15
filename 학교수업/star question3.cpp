#include <stdio.h>

int main1()
{
	int i;

	for (i = 1; i <= 9; i++)
		printf("2 X %d = %d\n", i, 2 * i);

	printf("i = %d\n", i);

	return 0;
}

int main2()
{
	int i, j;

	for (i = 9; i >= 2; i--)
	{
		printf("%d´Ü\n", i);
		for (j = 9; j >= 1; j--)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}

int main3()
{
	int n1, n2, sum = 0, doubles = 1, i;

	scanf_s("%d %d", &n1, &n2);

	for (i = n1; i <= n2; i++)
	{
		sum += i;
		doubles *= i;
	}
	printf("ÇÕ : %d\n°ö : %d\n", sum, doubles);

	return 0;
}

int main4()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int main5()
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int main6()
{
	int i, j;

	for (i = 5; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int main7()
{
	int i, j, k;

	for (i = 5; i >= 1; i--)
	{
		for (k = 5; k > i; k--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}


int main8()
{
	int i, j;

	for (i = 5; i >= 1; i--)
	{
		for (j = 0; j < 5 - i; j++)
		{
			putchar(32);
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int main9()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(32);
		}
		for (j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
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
	printf("\n\n");
	main6();
	printf("\n\n");
	main7();
	printf("\n\n");
	main8();
	printf("\n\n");
	main9();

	return 0;
}