#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

int main1()
{
	int n1, n2, n3;
	n1 = printf("I love you\n");
	printf("n1=%d\n", n1);
	n2 = printf("�� �� �����\n");
	printf("n2=%d\n", n2);
	n3 = printf("123 456\n");
	printf("n3=%d\n", n3);
	return 0;
}

void add1(int n1, int n2)
{
	printf("������� : %d", n1 + n2);
}
int main2()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	add(n1, n2);

	return 0;
}

int add2(int n1, int n2)
{
	return n1 + n2;
}
int main3()
{
	int n1, n2, answer;
	scanf("%d %d", &n1, &n2);
	answer = add(n1, n2);
	printf("%d", answer);

	return 0;
}
 
int add3(int n1, int n2)
{
	return n1 + n2;
}
int sub1(int n1, int n2)
{
	if (n1 > n2)
		return n1 - n2;
	else
		return n2 - n1;
}
int mul1(int n1, int n2)
{
	return n1 * n2;
}
int _div1(int n1, int n2)
{
	if (n2 == 0)
		return 0;
	else {
		if (n1 > n2)
			return n1 / n2;
		else
			return n2 / n1;
	}
}
int main4()
{
	int n1, n2, answer1, answer2, answer3, answer4;
	scanf("%d %d", &n1, &n2);
	answer1 = add3(n1, n2);
	answer2 = sub1(n1, n2);
	answer3 = mul1(n1, n2);
	answer4 = _div1(n1, n2);
	printf("%d %d %d %d", answer1, answer2, answer3, answer4);

	return 0;
}

int a, b; //��������, ��� �Լ����� ���� ����
int input1()
{
	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);
}
int add2(int n1, int n2)
{
	return n1 + n2;
}
int sub2(int n1, int n2)
{
	return n1 - n2;
}
int mul2(int n1, int n2)
{
	return n1 * n2;
}
int div2(int n1, int n2)
{
	if (n2 == 0)
		return 0;
	else
		return n1 / n2;
}
int main5()
{
	printf("��Ģ���� ���α׷�\n");
	input1();
	printf("%d\n", add2(a, b));
	printf("%d\n", sub2(a, b));
	printf("%d\n", mul2(a, b));
	printf("%d\n", div2(a, b));
}

int n1, n2;
void input2()
{
	printf("�� ���� �Է� : ");
	scanf("%d %d", &n1, &n2);
}
void output()
{
	printf("���� : %d\n", n1 + n2);
	printf("�y�� : %d\n", n1 - n2);
	printf("���� : %d\n", n1 * n2);
	if (n2 != 0)
		printf("������ : %d\n", n1 / n2);
	else
		printf("������ : ����\n");
}
int main6()
{
	printf("��Ģ���� ���α׷�\n");
	input2();
	output();

	return 0;
}

int max2(int num1, int num2); //����
int main7()
{
	printf("3�� 4�߿��� ū ���� %d �̴�.\n", max2(3, 4));
	printf("7�� 2�߿��� ū ���� %d �̴�.\n", max2(7, 2));
	return 0;
}
int max2(int num1, int num2) //����
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int maxABS1(int n1, int n2);
int main8()
{
	int n1, n2, answer;
	scanf("%d %d", &n1, &n2);
	answer = maxABS1(n1, n2);
	printf("���밪�� ū �� : %d", answer);

	return 0;
}
int maxABS1(int n1, int n2)
{
	int a1 = n1, a2 = n2;
	if (a1 < 0)
		a1 *= -1;
	if (a2 < 0)
		a2 *= -1;

	if (a1 > a2)
		return a1;
	else if (a1 < a2)
		return a2;
	else
		return a1;
}

void input(int* a, int* b)
{
	scanf("%d %d", a, b);
}
void output(int a, int b)
{
	int c = a, d = b;
	if (a < 0)
		c *= -1;
	if (b < 0)
		d *= -1;
	printf("%d", c > d ? a : b);
}
int main9()
{
	int a, b;
	input(&a, &b);
	output(a, b);

	return 0;
}

int maxABS2(int num1, int num2)
{
	if (abs(num1) > abs(num2))
		return num1;
	else
		return num2;
}
int abs(int num)
{
	if (num < 0)
		return num * -1;
	else
		return num; 
}
int main10()
{
	int num1, num2, answer;
	
	scanf("%d %d", &num1, &num2);
	answer = maxABS2(num1,num2);
	printf("%d", answer);
	
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
	printf("\n\n");
	main8();
	printf("\n\n");
	main9();
	printf("\n\n");
	main10();

	return 0;
}