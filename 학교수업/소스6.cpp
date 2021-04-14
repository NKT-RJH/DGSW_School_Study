#include <stdio.h>

//int main()
//{
//	int i, j, k = 1;
//	for (i = 5; i > 0; i--)
//	{
//		for (j = 0; j < i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < k; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i, j, k;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j < 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < i * 2 + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	if (num < 0)
//		printf("0º¸´Ù ÀÛ´Ù.\n");
//	else if (num > 0)
//		printf("0º¸´Ù Å©´Ù.\n");
//	else
//		printf("0°ú °°´Ù.\n");
//
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			j++;
//		}
//		if (j % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i, j = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 || i % 4 ==0)
//		{
//			printf("%d ", i);
//			j++;
//		}
//		if (j % 5 + 1 == 0)
//		{
//			j = 1;
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int opt;
//	double num1, num2, result;
//	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À\n");
//	printf("¼±ÅÃ? ");
//	scanf_s("%d", &opt);
//	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â : ");
//	scanf_s("%lf %lf", &num1, &num2);
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else
//		result = num1 / num2;
//	printf("°á°ú : %f\n", result);
//
//	return 0;
//}