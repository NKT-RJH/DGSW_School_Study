#include <stdio.h>

//int main()
//{
//	int i = 0;
//	
//	while (i < 9)
//		printf("%d*%d=%d\n", 3, i, 3 * ++i);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	do
//		printf("%d*%d=%d\n", 3, i, 3 * ++i);
//	while (i < 9);
//
//	return 0;
//}

//int main()
//{
//	int i = -1, sum = 0;
//
//	printf("���ڸ� �Է��ϼ��� : \n");
//
//	while (i != 0)
//	{
//		printf("0 �Է½� ���� : ");
//		scanf_s("%d", &i);
//		sum += i;
//	}
//
//	printf("���� : %d", sum);
//
//	return 0;
//}

//int main()
//{
//	int i, j;
//
//	scanf_s("%d", &i);
//	for (j = 1; j <= 9; j++)
//		printf("%d*%d=%d\n", i, j, i * j);
//
//	return 0;
//}

//int main()
//{
//	int i, j;
//
//	for (i = 2; i <= 9; i++)
//	{
//		printf("%d��\n",i);
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%d\n",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i, a, b, temp, sum = 1;
//
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	for (i = a; i <= b; i++)
//		sum *= i;
//	
//	printf("������ �� : %d", sum);
//
//	return 0;
//}