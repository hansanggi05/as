//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("잠깐 졸았다\n");
//			continue;
//		}
//		if (sheep == 45)
//		{
//			break;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 10; number <=99; number++)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int con_number=1;
//	for (number = 3; number <= 8; number++)
//	{
//		con_number *= number;
//	}
//	printf("3~8 곱한 값: %d\n", con_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 1; number <= 50; number++)
//	{
//		int ten = number /10;
//		int one= number %10;
//		if (ten%3==0 && ten || one % 3 == 0 && one)
//		{
//			printf("박수 %d\n", number);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':printf("START GAME\n"); break;
//		case 'e':printf("EXIT GAME\n"); return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++);
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number;
	for (number = 11; number <= 200; number += 11)
	{
		printf("%d\n", number);
	}
	
}