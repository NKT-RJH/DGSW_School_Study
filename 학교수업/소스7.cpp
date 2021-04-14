#include <stdio.h>

//int main()
//{
//	int i, k = 1;
//
//	for (i = 1; i <= 200; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			printf("%d ", i);
//			k++;
//		}
//		if (k % 6 == 0)
//		{
//			k = 1;
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int num;
//
//	scanf_s("%d", &num);
//
//	if (num < 0)
//		num *= -1;
//
//	printf("%d", num);
//
//	return 0;
//}

//int main()
//{
//	int num;
//
//	scanf_s("%d", &num);
//
//	num < 0 ? num *= -1:num;
//
//	printf("%d", num);
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//
//	scanf_s("%d %d", &a, &b);
//
//	if (a > b)
//		printf("%d", a - b);
//	else
//		printf("%d", b - a);
//
//	return 0;
//}

//int main()
//{
//	int n1, n2, abs;
//	
//	scanf_s("%d %d", &n1, &n2);
//	
//	if (n1 > n2)
//		abs = n1 - n2;
//	else
//		abs = n2 - n1;
//	
//	printf("%d", abs);
//
//	return 0;
//}

//int main()
//{
//	int language, math, programming, avg;
//
//	scanf_s("%d %d %d", &language, &math, &programming);
//	
//	avg = (language + math + programming) / 3;
//
//	if (avg >= 90)
//	{
//		printf("A ");
//	}
//	else if (avg >= 80)
//	{
//		printf("B ");
//	}
//	else if (avg >= 70)
//	{
//		printf("C ");
//	}
//	else if (avg >= 60)
//	{
//		printf("D ");
//	}
//	else {
//		printf("F ");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0, sum = 0;
//
//	while (1)
//	{
//		if (sum < 5000)
//			sum += ++i;
//		else
//			break;
//	}
//
//	printf("ÃÑÇÕ : %d\n", sum);
//	printf("±×¶§ÀÇ i : %d\n", --i);
//
//	return 0;
//}

//int main()
//{
//	int n;
//
//	for (n = 0; n < 20; n++)
//	{
//		if (n % 2 == 0 || n % 3 == 0)
//		{
//			continue;
//		}
//			printf("%d ", n);
//	}
//
//	return 0;
//}