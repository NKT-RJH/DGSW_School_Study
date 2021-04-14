//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define M_PI 3.14

/*
int main()
{
	char ch = 9;
	//sizeof 연산자 : 자료형의 크기를 알려줌
	printf("ch의 크기 : %d byte\n", sizeof(ch));
	printf("숫자 9의 크기 : %d byte\n", sizeof(9));
	int n = 9;
	printf("ch의 크기 : %d byte\n", sizeof(n));
	printf("숫자 9의 크기 : %d byte\n", sizeof(9));
	double d = 9.5;
	printf("ch의 크기 : %d byte\n", sizeof(d));
	printf("숫자 9의 크기 : %d byte\n", sizeof(9.5));

	return 0;
}
*/

/*
int main()
{
	double num,area;
	scanf_s("%lf", &num);

	area = num * num * M_PI;
	printf("원의 넓이 : %lf", area);

	return 0;
}
*/

/*
int main()
{
	int n1, n2, num;
	
	scanf_s("%d %d", &n1, &n2);

	num = n1 * n2;
	printf("사각형의 넓이 : %d", num);

	return 0;
}
*/

/*
int main()
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);

	return 0;
}
*/

/*
int main()
{
	int n;
	char c;
	printf("숫자와 문자 입력 : ");
	scanf_s("%d", &n);
	printf("ASCII 문자 : %c\n", n);
	getchar();
	printf("문자 입력 : ");
	scanf_s("%c", &c);
	printf("정수 : %d\n", c);

	return 0;
}
*/

/*
int main()
{
	int x1, x2, y1, y2, path_x, path_y;

	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);

	path_x = x2 - x1;
	path_y = y2 - y1;
	printf("사각형의 넓이 : %d", path_x * path_y);

	return 0;
}
*/

/*
int main()
{
	float f = 1.234;
	double d = 1.23423234;

	return 0;
}
*/

/*
int main()
{
	float f = 3.245;

	float f = 3.245f;
}
*/

/*
int main()
{
	const int max = 100;
	max = 200;

	return 0;
}
*/