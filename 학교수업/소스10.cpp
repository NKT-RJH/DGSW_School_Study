#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

//int main()
//{
//	int n1, n2, n3;
//	n1 = printf("I love you\n");
//	printf("n1=%d\n", n1);
//	n2 = printf("�� �� �����\n");
//	printf("n2=%d\n", n2);
//	n3 = printf("123 456\n");
//	printf("n3=%d\n", n3);
//	return 0;
//}

//void add(int n1, int n2)
//{
//	printf("������� : %d", n1 + n2);
//}
//int main()
//{
//	int n1, n2;
//	scanf("%d %d", &n1, &n2);
//	add(n1, n2);
//
//	return 0;
//}

//int add(int n1, int n2)
//{
//	return n1 + n2;
//}
//int main()
//{
//	int n1, n2, answer;
//	scanf("%d %d", &n1, &n2);
//	answer = add(n1, n2);
//	printf("%d", answer);
//
//	return 0;
//}
// 
//int add(int n1, int n2)
//{
//	return n1 + n2;
//}
//int sub(int n1, int n2)
//{
//	if (n1 > n2)
//		return n1 - n2;
//	else
//		return n2 - n1;
//}
//int mul(int n1, int n2)
//{
//	return n1 * n2;
//}
//int _div(int n1, int n2)
//{
//	if (n2 == 0)
//		return 0;
//	else {
//		if (n1 > n2)
//			return n1 / n2;
//		else
//			return n2 / n1;
//	}
//}
//int main()
//{
//	int n1, n2, answer1, answer2, answer3, answer4;
//	scanf("%d %d", &n1, &n2);
//	answer1 = add(n1, n2);
//	answer2 = sub(n1, n2);
//	answer3 = mul(n1, n2);
//	answer4 = _div(n1, n2);
//	printf("%d %d %d %d", answer1, answer2, answer3, answer4);
//
//	return 0;
//}

//int a, b; //��������, ��� �Լ����� ���� ����
//int input2()
//{
//	printf("�� ���� �Է� : ");
//	scanf("%d %d", &a, &b);
//}
//int add(int n1, int n2)
//{
//	return n1 + n2;
//}
//int sub(int n1, int n2)
//{
//	return n1 - n2;
//}
//int mul(int n1, int n2)
//{
//	return n1 * n2;
//}
//int div(int n1, int n2)
//{
//	if (n2 == 0)
//		return 0;
//	else
//		return n1 / n2;
//}
//int main()
//{
//	printf("��Ģ���� ���α׷�\n");
//	input2();
//	printf("%d\n", add(a, b));
//	printf("%d\n", sub(a, b));
//	printf("%d\n", mul(a, b));
//	printf("%d\n", div(a, b));
//}

//int n1, n2;
//void input2()
//{
//	printf("�� ���� �Է� : ");
//	scanf("%d %d", &n1, &n2);
//}
//void output()
//{
//	printf("���� : %d\n", n1 + n2);
//	printf("�y�� : %d\n", n1 - n2);
//	printf("���� : %d\n", n1 * n2);
//	if (n2 != 0)
//		printf("������ : %d\n", n1 / n2);
//	else
//		printf("������ : ����\n");
//}
//int main()
//{
//	printf("��Ģ���� ���α׷�\n");
//	input2();
//	output();
//
//	return 0;
//}

//int max2(int num1, int num2); //����
//int main()
//{
//	printf("3�� 4�߿��� ū ���� %d �̴�.\n", max2(3, 4));
//	printf("7�� 2�߿��� ū ���� %d �̴�.\n", max2(7, 2));
//	return 0;
//}
//int max2(int num1, int num2) //����
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}

//int maxABS(int n1, int n2);
//int main()
//{
//	int n1, n2, answer;
//	scanf("%d %d", &n1, &n2);
//	answer = maxABS(n1, n2);
//	printf("���밪�� ū �� : %d", answer);
//
//	return 0;
//}
//int maxABS(int n1, int n2)
//{
//	int a1 = n1, a2 = n2;
//	if (a1 < 0)
//		a1 *= -1;
//	if (a2 < 0)
//		a2 *= -1;
//
//	if (a1 > a2)
//		return a1;
//	else if (a1 < a2)
//		return a2;
//	else
//		return a1;
//}

//void input(int* a, int* b)
//{
//	scanf("%d %d", a, b);
//}
//void output(int a, int b)
//{
//	int c = a, d = b;
//	if (a < 0)
//		c *= -1;
//	if (b < 0)
//		d *= -1;
//	printf("%d", c > d ? a : b);
//}
//int main()
//{
//	int a, b;
//	input(&a, &b);
//	output(a, b);
//
//	return 0;
//}

//int maxABS(int num1, int num2)
//{
//	if (abs(num1) > abs(num2))
//		return num1;
//	else
//		return num2;
//}
//int abs(int num)
//{
//	if (num < 0)
//		return num * -1;
//	else
//		return num; 
//}
//int main()
//{
//	int num1, num2, answer;
//	
//	scanf("%d %d", &num1, &num2);
//	answer = maxABS(num1,num2);
//	printf("%d", answer);
//	
//	return 0;
//}