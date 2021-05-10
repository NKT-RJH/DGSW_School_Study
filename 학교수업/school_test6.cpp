#include <stdio.h>

int main1()
{
	int number, var[10] = { 0, }, i;

	while (1)
	{
		scanf("%d", &number);
		if (number <= 10 && number >= 1)
			var[number - 1]++;
		else
			break;
	}
	for (i = 0; i < 10; i++)
	{
		if (var[i] != 0)
			printf("%d : %d개\n", i + 1, var[i]);
	}

	return 0;
}

int main2()
{
	int i, num[3][3];
	for (i = 10; i <= 30; i += 10)
	{
		printf("%d번 점수 : ", i);
		scanf("%d %d %d", &num[(i / 10) - 1][0], &num[(i / 10) - 1][1], &num[(i / 10) - 1][2]);
	}
	printf("    컴일 프C 수학 총점\n");
	for (i = 1; i <= 3; i++)
		printf("%d번 %3d %3d  %3d  %3d\n", i * 10, num[i - 1][0], num[i - 1][1], num[i - 1][2], num[i - 1][0] + num[i - 1][1] + num[i - 1][2]);

	return 0;
}

int main()
{
	main1();
	printf("\n\n");
	main2();
	printf("\n\n");

	return 0;
}