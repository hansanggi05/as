//#include <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
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
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf(" %c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue; }
//		printf("입력한 값 : %c\n", alphabet);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료);");
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
		printf("B가 이겼습니다!");
	}
	else
	{
		printf("A가 이겼습니다!");
	}

	return 0;
}