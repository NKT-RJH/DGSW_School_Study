#include <stdio.h>

int main()
{
	int i, j, k = 1;

	for (i = 0; i < 5; i++)
	{
		for (j = 4; j > i; j--)
			printf(" ");
		for (j = 0; j < k; j++)
			printf("*");
		k += 2;
		printf("\n");
	}
	for (i = 0; i < 5; i++)
	{
		k -= 2;
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = k; j > 0; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}