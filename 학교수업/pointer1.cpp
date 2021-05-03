#include <stdio.h>

int main1()
{
	int a[5] = { 0,1,2,3,4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%p %p\n", &a[0], &a[1]);
	printf("%d\n", &a[0] - &a[1]);

	return 0;
}

int main2()
{
	int arr[5] = { 1,2,3,4,5 };
	int* pArr = arr;
	printf("%d\n", *pArr);
	printf("%d\n", *(++pArr));
	printf("%d\n", *(++pArr));
	printf("%d\n", *(pArr + 1));
	printf("%d\n", *(pArr + 2));

	return 0;
}

int main3()
{
	char Arr[3][10] = { "Kim","Hong","Lee" };
	char* pArr[3] = { Arr[0],Arr[1],Arr[2] };
	printf("%s\n", pArr[0]);
	printf("%s\n", pArr[1]);
	printf("%s\n", pArr[2]);
	printf("%s\n", *pArr);
	printf("%s\n", *(pArr + 1));
	printf("%s\n", *(pArr + 2));

	return 0;
}

int main()
{
	main1();
	printf("\n\n");
	main2();
	printf("\n\n");
	main3();

	return 0;
}