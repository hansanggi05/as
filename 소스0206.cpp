//#include <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 3���� ���� ���� �ݺ�\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int C = 0;
//	while (C < 6)
//	{
//		printf("C\n");
//		C++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = -10;
//	while (n <=0)
//	{
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (n <= 100)
//	{
//		if (n % 5 == 0)
//		{
//			printf("%d\n", n);
//		}
//		n++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�):");
//		scanf(" %c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else { continue; }
//		printf("�Է��� �� : %c\n", alphabet);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("����� �Է����ּ���(0�Է½� ����);");
//		scanf(" %d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi *= number;
//		if (multi >= 50000)
//		{
//			break;
//		}
//		number++;
//	}
//	
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 'A';
//	while (a<='Z')
//	{
//		if (a != 'F')
//		{
//			printf("%c\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number=0 ,number2=0 ,total = 0;
	int turn = 0;
	while (total<=30)
	{
		if (turn == 0)
		{
			printf("A (1~3) : ");
		}
		scanf("%d", &number);
		total += number;
		printf("%d\n", total);
		turn++;
		if (turn == 1)
		{
			printf("B (1~3) : ");
		}
		scanf("%d", &number2);
		total  += number2;
		printf("%d\n", total);
		turn--;
	}
	if (turn == 0)
	{
		printf("B�� �̰���ϴ�!");
	}
	else
	{
		printf("A�� �̰���ϴ�!");
	}

	return 0;
}