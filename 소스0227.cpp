//#include <stdio.h>
//int main()
//{
//	int i, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 2; k++)
//		{
//			printf("��ø for���Դϴ�. (i �� : %d, k��: %d)\n", i, k);
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i, k;
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//		{
//			printf("%d X %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i, k;
//	for (i = 1; i <= 9; i++)
//	{
//		for (k = 2; k <= 9; k++)
//		{
//			printf("%2dX%2d=%2d", k, i, k * i);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	/*printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");*/
//
//	/*for (int x = 2; x >= 1; x--)
//		printf(" ");
//	for (int x = 1; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 1; x >= 1; x--)
//		printf(" ");
//	for (int x = 3; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 0; x >= 1; x--)
//		printf(" ");
//	for (int x = 5; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 0; x >= 1; x--)
//		printf(" ");
//	for (int x = 5; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 1; x >= 1; x--)
//		printf(" ");
//	for (int x = 3; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 2; x >= 1; x--)
//		printf(" ");
//	for (int x = 1; x >= 1; x--)
//		printf("*");
//	printf("\n");*/
//
//	/*int y = 2;
//	int m = 1;
//
//
//
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//	m += 2;
//
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//	m += 2;
//
//	
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//	m += 2;
//
//	y += 1;
//	m -= 2;
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	
//	
//
//	y += 1;
//	m -= 2;
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	y += 1;
//	m -= 2;
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");*/
//	
//
//	int Line;
//	printf("�� ��>> ");
//	scanf("%d", &Line);
//	int y;
//	int m = 1;
//
//	for (y=Line; y >= 1; y -= 1)
//	{
//		for (int x = y; x >= 2; x--)
//			printf(" ");
//		for (int x = m; x >= 1; x--)
//			printf("*");
//		printf("\n");
//		
//		m += 2;
//	}
//
//	for (y=1; y <= Line; y += 1)
//	{
//		m -= 2;
//		for (int x = y; x >= 2; x--)
//			printf(" ");
//		for (int x = m; x >= 1; x--)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	/*printf(" ");
//	printf(" ");
//	printf("1");
//	printf("\n");
//	printf(" ");
//	printf("2");
//	printf("2");
//	printf("\n");
//	printf("3");
//	printf("3");
//	printf("3");*/
//
//	/*for (int x = 2; x >= 1; x--)
//		printf(" ");
//	for (int x = 0; x >= 0; x--)
//		printf("1");
//	printf("\n");
//	
//	for (int x = 1; x >= 1; x--)
//		printf(" ");
//	for (int x = 1; x >= 0; x--)
//		printf("2");
//	printf("\n");
//
//	for (int x = 0; x >= 1; x--)
//		printf(" ");
//	for (int x = 2; x >= 0; x--)
//		printf("3");
//	printf("\n");*/
//
//
//	/*int y = 2;
//	int m = 0;
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 0; x--)
//		printf("1");
//	printf("\n");
//	y -= 1;
//	m += 1;
//
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 0; x--)
//		printf("2");
//	printf("\n");
//	y -= 1;
//	m += 1;
//
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 0; x--)
//		printf("3");
//	printf("\n");
//	y -= 1;
//	m += 1;*/
//
//	/*int y = 2;
//	int m = 0;
//	int number = 1;
//	for (; y >= 0;)
//	{
//		for (int x = y; x >= 1; x--)
//			printf(" ");
//		for (int x = m; x >= 0; x--)
//			printf("%d", number);
//		printf("\n");
//		y -= 1;
//		m += 1;
//		number += 1;
//	}*/
//	
//
//	/*int Line = 2;
//	int m = 0;
//	int number = 1;
//	for (int y = Line; y >= 0; y -= 1)
//	{
//		for (int x = y; x >= 1; x--)
//			printf(" ");
//		for (int x = m; x >= 0; x--)
//			printf("%d", number);
//		printf("\n");
//		m += 1;
//		number += 1;
//	}*/
//	
//
//	int Line = 2;
//	printf("�� �� >> ");
//	scanf("%d", &Line);
//	int m = 0;
//	int number = 1;
//	for (int y = Line; y >= 1; y -= 1)
//	{
//		for (int x = y; x >= 2; x--)
//			printf(" ");
//		for (int x = m; x >= 0; x--)
//			printf("%d", number);
//		printf("\n");
//		m += 1;
//		number += 1;
//	}
//
//}


#include <stdio.h>
int main()
{
	printf("<����Ų ��� 31!>\n");
	printf("������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�. (0 �Է½� �ϳѱ�)\n");
	int plyer;
	int total = 0;
	int turn;
	int talk = 1;
	int win = 0;
	while (1)
	{

		for (turn = 1; turn <= 3; turn++)
		{
			
			printf("A : ");
			scanf("%d", &plyer);
			if (plyer == 0)
			{
				if (turn == 0)
				{
					printf("")
				}
			}
			if (plyer != talk)
			{
				while (1)
				{
					printf("�߸��� �Է��Դϴ�.\n");
					printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", talk);
					printf("A : ");
					scanf("%d", &plyer);
					if (plyer == talk)
					{
						break;
					}
				}
			}
			total += plyer;
			
		
			talk += 1;
			if (plyer == 31)
			{
				break;
			}
		}
		if (plyer == 31)
		{
			break;
		}
		printf("���� �Ѿ�ϴ�.\n");

		for (turn = 1; turn <= 3; turn++)
		{
			printf("B : ");
			scanf("%d", &plyer);
			
			if (plyer != talk)
			{
				while (1)
				{
					printf("�߸��� �Է��Դϴ�.\n");
					printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", talk);
					printf("B : ");
					scanf("%d", &plyer);
					if (plyer == talk)
					{
						break;
					}
				}
			}


			total += plyer;

			if (plyer == 0)
			{
				break;
			}
			talk += 1;
			if (plyer == 31)
			{
				break;
			}
		}
		if (plyer == 31)
		{
			break;
		}
		printf("���� �Ѿ�ϴ�.\n");
	}
	if (win == 0)
		printf("���� B�� �¸��Դϴ�!");
	else
		printf("���� A�� �¸��Դϴ�!");
	
	return 0;
}