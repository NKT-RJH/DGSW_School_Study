#include <stdio.h>

void bubblesort(int arr[], int len);

int main()
{
	int arr[5] = { 4, 6, 1, 3, 9 };
	int i;
	bubblesort(arr, 5); // ���� ����
	// ���ĵ� �� ���
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}

void bubblesort(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++) // �迭�� 0���� �����̱⿡ len - 1
	{
		for (int j = 0; j < len - i - 1; j++) // �迭�� ���̿� i�� ���� 1�� �� ��ŭ �ݺ�. ���� ū ���� �� �����̳� �� ���������� ������ ����
		{
			if (arr[j] > arr[j + 1]) // arr[j]�� arr[j+1]���� ũ�� ����
			{
				temp = arr[j]; // arr[j]�� arr[j+1]�� �ٲٱ�
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}