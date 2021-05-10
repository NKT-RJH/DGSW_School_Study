#include <stdio.h>

#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]

void makearr(int n)
{
	int value = 1;
	int row = 0, col = -1;
	int inc = 1; // ���� ���� ó��, 1, -1
	int i;
	while (n > 0) // ������ ���� ���̰� 0�� ���� �ʱ� ����
	{
		for (i = 0; i < n; i++)
		{
			col += inc; // 2���� �迭�� �� �������� �̵�
			arr[row][col] = value++; // value�� �迭�� ���� ��
		}
		n--; // ������ �� ������ �ݺ��ϱ� ���� 1�� ����
		if (n == 0) // ������ ���̱��� �ݺ��ϸ� �ݺ��� ������
			break;
		for (i = 0; i < n; i++)
		{
			row += inc; // 2���� �迭�� �� �������� �̵�
			arr[row][col] = value++;
		}
		inc *= -1; // ������ ���� ���� ��ȯ
	}
}

void printarr(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]); // �迭�� ����� ���� ������� ���
		}
		printf("\n");
	}
}

int main()
{
	int side;
	printf("������ �迭�� ���� : ");
	scanf_s("%d", &side);
	makearr(side); // ������ �迭 �����
	printarr(side); // ������ �迭 ����ϱ�

	return 0;
}