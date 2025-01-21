//#include <stdio.h>
//int main()
//{
//	printf("C 언어\n");
//	printf("200+300\n");
//	printf("%d\n", 200 + 300);
//
//	printf("%d %d %d %d\n", 100, 200, 300);
//	printf("%d %d\n",100,200, 300);
//	printf("%d\n",100,200, 300);
//
//	printf("%d / %d = %d \n", 10, 20, 10 / 20);
//	
//	printf("%05d\n", 4321);
//	printf("%7.1f\n", 4321.7890);
//	printf("%5s\n", "Cook");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, res;
//	a= b= c = 10;
//	res = a * b * c;
//	printf("a,b,c 의 곱셈 값 == >%d \n", res);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2 = 'B', ch3 = 'c';
//	ch1 = ch2 = 100;
//	ch1 = ch2 = 'T';
//	ch1 = ch2 = 200;
//	ch3 = ch1 - ch2;
//	printf(ch3, ch1, ch2);
//
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	printf("f111\n");
//	printf("111+222\n");
//	printf("%d\n", 111 + 222);
//
//	float a = 123.45;
//	printf("%08.3f\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	float a = 123.45, b;
//	int c;
//	c = a;
//	b = c;
//	printf("%6.2f\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 111.22;
//	float b = 300;
//
//	printf("a의 값 == > %d \n", a);
//	printf("b의 값 == > %f \n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x41, b = 0x61;
//
//	int tol;
//
//	tol = b - a;
//
//	printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + tol);
//	printf("%c를 대문자로 표시하면 %c이면 \n", 'z', 'z' - tol);
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	printf("첫숫자 : %d\n", randint);
//	printf("다음숫자 : %d", nextint);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);//0~9
//	printf("다음숫자 : %d", nextInt);//50~59
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; 
//	printf("%d원이다\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple는 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("appke은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple ==0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else 
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	if (input > 0)
//	{
//		printf("input의 값이 양수입니다.\n");
//	}
//	else if(input <0)
//	{
//		printf("input의 값이 음수입니다.\n");
//	}
//	else if (!input)
//	{
//		printf("input의 값이 0입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input은 두 자리 숫자입니다.");
//	}
//	else
//	{
//		printf("input은 두 자리 숫자가 아닙니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다. \n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다. \n");
//	}
//	else if(height >160)
//	{
//		printf("키가 160 이상입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	if (y_age)
//	{
//		printf("전체 관람가를 볼 수 있습니다. \n");
//	}
//	if (y_age >= 12 )
//	{
//		printf("12세 관람가를 볼 수 있습니다. \n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가를 볼 수 있습니다. \n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char initial;
	scanf("%c", &initial);
	
}