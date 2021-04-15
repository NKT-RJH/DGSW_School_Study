#include <stdio.h>

int main1()
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

int main2()
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
	main2();
}