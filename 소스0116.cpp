//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k);
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d�Դϴ�.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �� �� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("������� : %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float r;
//	printf("���� �������� �Է� : ");
//	scanf("%f", &r);
//	double pi;
//	pi = 3.14;
//	float the_area;
//	the_area = r * r * pi;
//	float the_perimeter;
//	the_perimeter = r * 2 * pi;
//	printf("���� ���̴� %.2lf�̰� ���� �ѷ��� %.2f�̴�", the_area, the_perimeter);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float undercm, upcm, h;
//	printf("�غ��� ����, ������ ����, ���̸� ������� �Է� : ");
//	scanf("%f %f %f", &undercm, &upcm, &h);
//	float wh;
//	wh = (undercm + upcm) * h / 2;
//	printf("��ٸ����� ���̴� : %.2f", wh);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a,b,a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("���� �ΰ��� �Է� : ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int first =1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = 1%%4\n", number1);
//	printf("%d = 5%%3\n", number2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d=6%%3\n", sixth);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("50���� ������ ���� ���� �Է� : ");
//	scanf("%d", &a);
//	printf("%d%%50 = %d", a, a % 50);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
//	return 0;
//}

#include <stdio.h>
int main()
{
	int je;
	printf("1000�� �̸��� ������ ����.(��)");
	scanf("%d", &je);
	int coin;
	coin = 1000;
	int coin500 = coin / 500;
	coin = coin % 500;
	int coin100 = coin / 100;
	coin = coin & 100;
	int coin50 = coin / 50;


}