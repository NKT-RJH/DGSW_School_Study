#include <stdio.h>

int main1()
{
	int i, j;

	for (i = 2; i <= 9; i += 2)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}

int main2()
{
	int i, j;

	for (i = 2; i <= 9; i++)
	{
		if (i % 2)
			continue;
		for (j = 1; j <= 9; j++)
		{
			//if(a < b)
			//	break;
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}

int main3()
{
	int a, b;

	for (a = 2; a < 10 && a % 2 == 0; a += 2)
	{
		printf("=============\n");
		for (b = 1; b <= a; b++)
		{
			printf("%d * %d = %d\n", a, b, a * b);
		}
	}

	return 0;
}

int main4()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if ((i * 10 + j) + (i + j * 10) == 99)
				printf("%d %d\n", i * 10 + j, i + j * 10);
		}
	}

	return 0;
}

int main5()
{
	int n;

	printf("1~5 사이의 값을 입력하세요 : ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 1:
		printf("1입니다.");
		break;
	case 2:
		printf("2입니다.");
		break;
	case 3:
		printf("3입니다.");
		break;
	case 4:
		printf("4입니다.");
		break;
	case 5:
		printf("5입니다.");
		break;
	default:
		printf("그 외의 숫자입니다.");
		break;
	}

	return 0;
}

int main6()
{
	char day;
	printf("M : Morning, A : Afternoon, E : Evening\n");
	printf("M, m, A, a, E, e 중에 입력 : ");
	while (true)
	{
		scanf_s("%c", &day);
		if (day == 'x' || day == 'X')
			return 0;
		switch (day)
		{
		case 'M':
		case 'm':
			printf("Good Morning~~\n");
			break;
		case 'A':
		case 'a':
			printf("Good Afternoon~~\n");
			break;
		case 'E':
		case 'e':
			printf("Good Evening~~\n");
			break;

		default:
			printf("범위 외의 입력입니다.");
			break;
		}
	}
	return 0;
}

int main7()
{
	int n;
	printf("자연수 입력 : ");
	scanf_s("%d", &n);
	if (n == 1)
		goto ONE;
	else if (n == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1입니다.\n");
	goto END;
TWO:
	printf("2입니다.\n");
	goto END;
OTHER:
	printf("그 외 숫자입니다.\n");
END:
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

	return 0;
}