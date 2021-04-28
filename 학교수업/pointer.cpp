#include <stdio.h>

int main1()
{
	// i가 변수면, &i는 변수i의 주소
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
	printf("주소(Address) : %p, %p\n", p, &n1);
	printf("내용, 값 : %d, %d\n", *p, n1);
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
	printf("a주소=%d, a[0]주소=%d\n", &a, &a[0]);
	int* p = a;
	printf("a주소=%d\n", p);
	printf("a주소=%d\n", a);
	printf("a주소=%d\n", &a[0]);
	printf("a주소=%d\n", &a[1]);
	printf("a주소=%d\n", a + 1); // a = 1000, a + 1 = 1004 (a는 int형 주소이기에 1을 더하면 메모리 양인 4가 이동된다. 또한 a++은 불가능.)

	return 0;
}

int main4()
{
	int a[5] = { 0,1,2,3,4 };
	int* p;
	int b = 10;
	//a = &b; 식이 수정할 수 있는 lvalue여야 합니다.
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