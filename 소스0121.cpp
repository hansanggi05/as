//#include <stdio.h>
//int main()
//{
//	printf("C ���\n");
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
//	printf("a,b,c �� ���� �� == >%d \n", res);
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
//	printf("a�� �� == > %d \n", a);
//	printf("b�� �� == > %f \n", b);
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
//	printf("%c�� �ҹ��ڷ� ǥ���ϸ� %c�̸� \n", 'K', 'K' + tol);
//	printf("%c�� �빮�ڷ� ǥ���ϸ� %c�̸� \n", 'z', 'z' - tol);
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randint = rand() % 10;
//	int nextint = rand() % 10;
//	printf("ù���� : %d\n", randint);
//	printf("�������� : %d", nextint);
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
//	printf("ù���� : %d\n", randInt);//0~9
//	printf("�������� : %d", nextInt);//50~59
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000; 
//	printf("%d���̴�\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf(" %d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple�� 17���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("appke�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple ==0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	else 
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
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
//		printf("input�� ���� ����Դϴ�.\n");
//	}
//	else if(input <0)
//	{
//		printf("input�� ���� �����Դϴ�.\n");
//	}
//	else if (!input)
//	{
//		printf("input�� ���� 0�Դϴ�.\n");
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
//		printf("input�� �� �ڸ� �����Դϴ�.");
//	}
//	else
//	{
//		printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�.");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�. \n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�. \n");
//	}
//	else if(height >160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�. \n");
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
//		printf("��ü �������� �� �� �ֽ��ϴ�. \n");
//	}
//	if (y_age >= 12 )
//	{
//		printf("12�� �������� �� �� �ֽ��ϴ�. \n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� �������� �� �� �ֽ��ϴ�. \n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char initial;
	scanf("%c", &initial);
	
}