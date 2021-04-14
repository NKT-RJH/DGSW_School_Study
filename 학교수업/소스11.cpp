#include <stdio.h>
#include <math.h>

//int main()
//{
//	double a = 20, b = 20;
//	int c = -20;
//	printf("a : %lf, b : %lf, c : %d\n", a, b, c);
//	
//	a = pow(a, 2);
//	b = sqrt(b);
//	c = abs(c);
//
//	printf("a의 제곱 : %lf, b의 제곱근 : %lf, c의 절대값 : %d", a, b, c);
//}

//int maxNum(int a, int b, int c);
//int minNum(int a, int b, int c);
//int main()
//{
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	printf("가장 큰 수 : %d\n",maxNum(a, b, c));
//	printf("가장 작은 수 : %d", minNum(a, b, c));
//	
//	return 0;
//}
//int maxNum(int a, int b, int c)
//{
//	if (a > b)
//	{
//		if (a > c)
//			return a;
//		else
//			return c;
//	}
//	else {
//		if (b > c)
//			return b;
//		else
//			return c;
//	}
//}
//int minNum(int a, int b, int c)
//{
//	if (a < b)
//	{
//		if (a < c)
//			return a;
//		else
//			return c;
//	}
//	else {
//		if (b < c)
//			return b;
//		else
//			return c;
//	}
//}

//int maxNum(int a, int b, int c);
//int minNum(int a, int b, int c);
//int main()
//{
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	printf("가장 큰 수 : %d\n", maxNum(a, b, c));
//	printf("가장 작은 수 : %d", minNum(a, b, c));
//
//	return 0;
//}
//int maxNum(int a, int b, int c)
//{
//	if (a > b)
//		return a > c ? a : c;
//	else
//		return b > c ? b : c;
//}
//int minNum(int a, int b, int c)
//{
//	if (a < b)
//		return a < c ? a : c;
//	else
//		return b < c ? b : c;
//}

//int fibonacci(int n);
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	fibonacci(n);
//	
//	return 0;
//}
//int fibonacci(int n)
//{
//	int f1 = 0, f2 = 1, f3, i;
//	if (n == 1)
//		printf("%d ", f1);
//	else
//		printf("%d %d ", f1, f2);
//	for (i = 0; i < n; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d ", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//
//	return 0;
//}

//int num = 5;
//int main()
//{
//	int num = 1;
//
//	if (num == 1)
//	{
//		int num = 7;
//		num += 10;
//		printf("if문 내 지역변수 num : %d\n", num);
//	}
//	printf("main 함수 내 지역변수 num : %d\n", num);
//
//	return 0;
//}