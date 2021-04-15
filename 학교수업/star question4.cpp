#include <stdio.h>

int main()
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