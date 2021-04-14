//#include <stdio.h>
//#include <Windows.h>
//#include <conio.h>
//
//int main()
//{
//	int a[10][10] = { 0, };
//	int key, x = 0, y = 0, temp;
//	
//	while (true)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				if (i == y && j == x)
//					a[i][j] = 1;
//			}
//		}
//		system("cls");
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				if (a[i][j] == 1)
//				{
//					printf("бс");
//				}
//				else
//					printf("бр");
//			}
//			printf("\n");
//		}
//		if (_kbhit())
//		{
//			key = _getch();
//			if (key == 75 && x - 1 >= 0)
//			{
//				temp = a[y][x];
//				a[y][x] = a[y][x - 1];
//				a[y][x - 1] = temp;
//				x--;
//			}
//			if (key == 72 && y - 1 >= 0)
//			{
//				temp = a[y][x];
//				a[y][x] = a[y - 1][x];
//				a[y - 1][x] = temp;
//				y--;
//			}
//			if (key == 77 && x + 1 <= 9)
//			{
//				temp = a[y][x];
//				a[y][x] = a[y][x + 1];
//				a[y][x + 1] = temp;
//				x++;
//			}
//			if (key == 80 && y + 1 <= 9)
//			{
//				temp = a[y][x];
//				a[y][x] = a[y + 1][x];
//				a[y + 1][x] = temp;
//				y++;
//			}
//			if (key == 113) //esc
//				break;
//		}
//	}
//	return 0;
//}