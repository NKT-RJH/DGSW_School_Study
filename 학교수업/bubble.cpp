#include <stdio.h>

void bubblesort(int arr[], int len);

int main()
{
	int arr[5] = { 4, 6, 1, 3, 9 };
	int i;
	bubblesort(arr, 5); // 버블 정렬
	// 정렬된 후 출력
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}

void bubblesort(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++) // 배열은 0부터 시작이기에 len - 1
	{
		for (int j = 0; j < len - i - 1; j++) // 배열의 길이에 i의 값과 1을 뺀 만큼 반복. 가장 큰 수를 맨 왼쪽이나 맨 오른쪽으로 보내기 위함
		{
			if (arr[j] > arr[j + 1]) // arr[j]이 arr[j+1]보다 크면 실행
			{
				temp = arr[j]; // arr[j]와 arr[j+1]값 바꾸기
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}