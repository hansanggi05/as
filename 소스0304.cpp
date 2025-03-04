//#include <stdio.h>
//int main()
//{
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게입을 시작합니다! 31을 말하는 사람이 지게됩니다. (0 입력시 턴넘김)\n");
//	int plyer;
//	int total = 0;
//	int turn;
//	int talk = 1;
//	int win = 0;
//	while (1)
//	{
//		for (turn = 1; turn <= 3; turn++)
//		{			
//			printf("A : ");
//			scanf("%d", &plyer);
//			if (plyer != talk)
//			{
//				if (plyer==0 &&turn == 1)
//				{
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//				}
//				else if (plyer == 0)
//				{
//					break;
//				}
//				while (1)
//				{
//					printf("잘못된 입력입니다.\n");
//					printf("지금 입력해야하는 값은 %d입니다.\n", talk);
//					printf("A : ");
//					scanf("%d", &plyer);
//					if (plyer == talk)
//					{
//						break;
//					}
//				}
//			}
//			total += plyer;
//			
//		
//			talk += 1;
//			if (plyer == 31)
//			{
//				break;
//			}
//		}
//		if (plyer == 31)
//		{
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//
//		for (turn = 1; turn <= 3; turn++)
//		{
//			printf("B : ");
//			scanf("%d", &plyer);
//			
//			if (plyer != talk)
//			{
//				if (plyer == 0 && turn == 1)
//				{
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//				}
//				else if (plyer == 0)
//				{
//					break;
//				}
//				while (1)
//				{
//					printf("잘못된 입력입니다.\n");
//					printf("지금 입력해야하는 값은 %d입니다.\n", talk);
//					printf("B : ");
//					scanf("%d", &plyer);
//					if (plyer == talk)
//					{
//						break;
//					}
//				}
//			}
//
//
//			total += plyer;
//
//			talk += 1;
//			if (plyer == 31)
//			{
//				win += 1;
//				break;
//			}
//		}
//		if (plyer == 31)
//		{
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	if (win == 0)
//		printf("유저 B의 승리입니다!");
//	else
//		printf("유저 A의 승리입니다!");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게입을 시작합니다! 31을 말하는 사람이 지게됩니다. (0 입력시 턴넘김)\n");
//	int input;
//	int turn;
//	int talk = 1;
//	int player = 0;
//	while (1)
//	{
//		for (turn = 1; turn <= 3; turn++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &input);
//			if (input == 0 && turn == 1)
//			{
//				printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//				turn -= 1;
//				continue;
//			}
//			else if (input == 0)
//				break;
//			if (talk != input)
//			{
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", talk);
//				turn -= 1;
//				continue;
//			}
//			talk += 1;
//			if (input == 31)
//				break;
//		}
//		if (input == 31)
//			break;
//		printf("턴이 넘어갑니다.\n");
//		player = !player;
//	}
//
//	printf("유저 %c가 졌습니다.",'A'+player);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//			continue;
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	while (1)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	
//	for(float conversion = 0;conversion<2;conversion+=0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double conversion = 90; 
//	while(conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for(;;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag)
//	{
//		printf("number = %d\n", number);
//		while (number++)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int for_flag=1;
//	int number=0;
//	for(;for_flag;)
//	{
//		printf("number = %d\n", number);
//		
//		for(;number++;)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

#include <stdio.h>
int suyel(int n)
{
	int sum = 0;
	for (int x = 0; x <= n; x++)
	{
		sum += x;
	}
	return sum;
}
int main()
{
	int result = suyel(10);
	printf("%d\n", result);
	return 0;
}