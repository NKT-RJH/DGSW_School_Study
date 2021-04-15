#include <stdio.h>


int main1()
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	c = (++a) + (b--);
	printf("a = %d, b = %d, c = %d", a, b, c);

	return 0;
}

int main2()
{
	int n1, n2, n3;
	double avg;
	scanf_s("%d %d %d", &n1, &n2, &n3);
	avg = (double)(n1 + n2 + n3) / 3;
	printf("avg = %.1lf", avg);

	return 0;
}

int main3()
{
	int sum;
	double a, b, c, avg;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	sum = (int)a + (int)b + (int)c;
	avg = (a + b + c) / 3;
	printf("sum = %d avg = %.lf", sum, avg);

	return 0;
}

int main4()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d %d %d %d", a > b, b >= c, a <= b, b < c);

	return 0;
}

int main5()
{
	double yardcm;
	printf("yard? ");
	scanf_s("%lf", &yardcm);
	printf("%lfyard = %.1lf", yardcm, yardcm * 91.44);
	
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

	return 0;
}