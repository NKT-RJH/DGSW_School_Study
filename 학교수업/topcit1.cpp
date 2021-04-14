#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

//int main()
//{
//	int dice;
//
//	srand((unsigned) time(NULL));
//	dice = rand() % 6 + 1; //1~6
//	printf("주사위 : %d\n", dice);
//
//	return 0;
//}

//int main()
//{
//	int dice1, dice2;
//
//	srand((unsigned)time(NULL));
//	dice1 = rand() % 6 + 1;
//	dice2 = rand() % 6 + 1;
//	printf("주사위 : %d\n주사위 : %d", dice1, dice2);
//
//	return 0;
//}

//int main()
//{
//	int dice1 = 0, dice2 = 0;
//	while (dice1 == dice2)
//	{
//		srand((unsigned)time(NULL));
//		dice1 = rand() % 6 + 1;
//		dice2 = rand() % 6 + 1;
//		//if (dice1 != dice2)
//			//break;
//		printf("주사위 : %d 주사위 : %d\n", dice1, dice2);
//	}
//
//	return 0;
//}

//int main()
//{
//	int num, bot, win = 0, lose = 0, draw = 0;
//	char try_again;
//	printf("-----GAME START-----\n");
//LOOP:
//	try_again = '\0';
//	printf("\n\n\n가위 : 1, 바위 : 2, 보 : 3\n");
//	printf("당신의 선택은? : ");
//	scanf("%d", &num);
//	getchar();
//	srand((unsigned)time(NULL));
//	bot = rand() % 3 + 1;
//	if (num == 1)
//	{
//		if (bot == 1)
//		{
//			printf("비겼습니다.");
//			draw++;
//		}
//		else if (bot == 2)
//		{
//			printf("졌습니다.");
//			lose++;
//		}
//		else if (bot == 3)
//		{
//			printf("이겼습니다.");
//			win++;
//		}
//		else;
//	}
//	else if (num == 2)
//	{
//		if (bot == 1)
//		{
//			printf("이겼습니다.");
//			draw++;
//		}
//		else if (bot == 2)
//		{
//			printf("비겼습니다.");
//			lose++;
//		}
//		else if (bot == 3)
//		{
//			printf("졌습니다.");
//			win++;
//		}
//		else;
//	}
//	else if (num == 3)
//	{
//		if (bot == 1)
//		{
//			printf("졌습니다.");
//			draw++;
//		}
//		else if (bot == 2)
//		{
//			printf("이겼습니다.");
//			lose++;
//		}
//		else if (bot == 3)
//		{
//			printf("비겼습니다.");
//			win++;
//		}
//		else;
//	}
//	else {
//		printf("\n다시 골라주세요.");
//		goto LOOP;
//	}
//		
//	while (true)
//	{
//		printf("\n다시 하시겠습니까?(y/n) : ");
//		try_again = getchar();
//		//scanf_s("%c", &try_again);
//		if (try_again == 'y')
//			goto LOOP;
//		else if (try_again == 'n')
//			break;
//		else;
//	}
//	
//	return 0;
//}