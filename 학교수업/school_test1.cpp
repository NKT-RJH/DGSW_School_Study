#include <stdio.h>

int a;

int fibonacci();
int main1()
{
	scanf("%d", &a);
	fibonacci();
	
	return 0;
}
int fibonacci()
{
	int f1 = 1, f2 = 1, f3, i;

	if (a == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < a - 2; i++)
	{
		printf("%d ", f3 = f1 + f2);
		f1 = f2;
		f2 = f3;
	}

	return 0;
}

int n;
void add(int);
int main2()
{
	printf("n=%d\n", n);
	add(3);
	printf("n=%d\n", n);
	n++;
	printf("n=%d\n", n);
	return 0;
}
void add(int a)
{
	n += a;
}

int recur(int n)
{
	if (n < 0)
		return 1;
	printf("함수안의 함수 호출 : %d\n", n);
	recur (n - 1);
}
int main3()
{
	recur(5);
	return 0;
}

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
int main4()
{
	printf("%d",fact(5));
	return 0;
}

int main5()
{
	int a, b, c, d, e;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sum1 = 0, sum2 = 0;
	a = b = c = d = e = 1;
	sum1 = a + b + c + d + e;
	arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = 1;
	for (int i = 0; i < 5; i++)
		sum2 += arr[i];
	printf("sum1=%d, sum2=%d\n", sum1, sum2);
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

	return 0;
}