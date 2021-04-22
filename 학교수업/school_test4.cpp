#include <stdio.h>

int main1()
{
	char character1, character2;

	scanf("%c", &character1);
	//getchar();

	while (1)
	{
		if (character1 == 10) break;
		scanf("%c", &character2);
		//character = getchar();
		if (character2 != 10)
			break;
		else
			printf("Hello");
	}

	return 0;
}

int main2()
{
	char a, b;
	scanf("%c", &b);
	while (1)
	{
		if (b == 10) break;
		scanf("%c", &a);
		if (a == 10)
			printf("Hello");
		if (a != 10) break;
	}

	return 0;
}

int main3()
{
	int language, math, english, avg;

	scanf("%d %d %d", &language, &math, &english);
	avg = (language + math + english) / 3;
	if (avg >= 80)
		printf("합격! %d", avg);
	else
		printf("불합격! %d", 80 - avg);

	return 0;
}

int main4()
{
	int insert_number;
	char var[30] = { '\0', }, insert_char;

	printf("초기값 : ");
	scanf("%s", &var);
	while (1)
	{
		printf("수정 희망 인덱스 : ");
		scanf("%d", &insert_number);
		printf("수정 값 : ");
		getchar();
		scanf("%c", &insert_char);
		var[insert_number - 1] = insert_char;
		printf("%s\n", var);
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

	return 0;
}