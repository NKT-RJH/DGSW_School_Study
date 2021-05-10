#include <stdio.h>

#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]

void makearr(int n)
{
	int value = 1;
	int row = 0, col = -1;
	int inc = 1; // 증가 감소 처리, 1, -1
	int i;
	while (n > 0) // 달팽이 고리의 길이가 0이 되지 않기 위함
	{
		for (i = 0; i < n; i++)
		{
			col += inc; // 2차원 배열의 열 방향으로 이동
			arr[row][col] = value++; // value는 배열에 넣을 값
		}
		n--; // 지정한 고리 수까지 반복하기 위해 1씩 감소
		if (n == 0) // 지정한 길이까지 반복하면 반복문 나가기
			break;
		for (i = 0; i < n; i++)
		{
			row += inc; // 2차원 배열의 행 방향으로 이동
			arr[row][col] = value++;
		}
		inc *= -1; // 달팽이 고리의 방향 전환
	}
}

void printarr(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]); // 배열에 저장된 정수 순서대로 출력
		}
		printf("\n");
	}
}

int main()
{
	int side;
	printf("달팽이 배열의 길이 : ");
	scanf_s("%d", &side);
	makearr(side); // 달팽이 배열 만들기
	printarr(side); // 달팽이 배열 출력하기

	return 0;
}