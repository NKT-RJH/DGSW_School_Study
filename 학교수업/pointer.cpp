#include <stdio.h>

int main1()
{
	// i�� ������, &i�� ����i�� �ּ�
	int n1 = 100, n2 = 200;
	int* p;
	//p = n1;
	p = &n1;
	printf("%p\n", p); //
	printf("%d\n", *p); //
	printf("%d\n", n1); //
	*p = 300;
	printf("%d\n", n1); //
	printf("%d\n", *p); //

	return 0;
}

int main2()
{
	int n1 = 100;
	int* p;
	p = &n1;
	printf("�ּ�(Address) : %p, %p\n", p, &n1);
	printf("����, �� : %d, %d\n", *p, n1);
	for (int i = 0; i < 5; i++)
		printf("%4d ", (*p)++);
	printf("%d", n1);
	return 0;
}

int main3()
{
	int a[5] = { 0,1,2,3,4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", &a[0], &a[1]);
	printf("a�ּ�=%d, a[0]�ּ�=%d\n", &a, &a[0]);
	int* p = a;
	printf("a�ּ�=%d\n", p);
	printf("a�ּ�=%d\n", a);
	printf("a�ּ�=%d\n", &a[0]);
	printf("a�ּ�=%d\n", &a[1]);
	printf("a�ּ�=%d\n", a + 1); // a = 1000, a + 1 = 1004 (a�� int�� �ּ��̱⿡ 1�� ���ϸ� �޸� ���� 4�� �̵��ȴ�. ���� a++�� �Ұ���.)

	return 0;
}

int main4()
{
	int a[5] = { 0,1,2,3,4 };
	int* p;
	int b = 10;
	//a = &b; ���� ������ �� �ִ� lvalue���� �մϴ�.
	p = &b;
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