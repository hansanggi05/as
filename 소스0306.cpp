//#include <stdio.h>
//int main()
//{
//	int i;
//	int e;
//	for (i = 9; i >= 1; i--)
//	{
//		for (e = 9; e >= 2; e--)
//		{
//			printf("%dx%d=%d\t", e, i, e * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	int odd_hap=0;
//	int even_hap=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			even_hap = even_hap + i;
//		else
//			odd_hap = odd_hap + i;
//	 }
//	printf(" Ȧ���� ��: %d \n", odd_hap);
//	printf(" ¦���� ��: %d \n", even_hap);
//}

//#include <stdio.h>
//void function_test1()
//{
//	printf("function_test()");
//	printf("�Լ��ȿ��� ����\n");
//}
//int main()
//{
//	printf("������\n");
//	function_test1();
//	printf("������\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double pi = 3.1415;
//	printf("%.3lf", pi);
//}

//#include <stdio.h>
//int main()
//{
//	printf("\"5 + 7 = 12\"");
//}

//#include <stdio.h>
//void eatFood()
//{
//	printf("��Ա�\n");
//}
//void goSleep()
//{
//	printf("���ڱ�\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood(); 
//	goSleep(); goSleep();
//}

//#include <stdio.h>
//void person_A()
//{
//	int money = 10000;
//	printf("A : �ָӴϿ�");
//	printf("%d��\n", money);
//}
//
//void person_B()
//{
//	int money = 5000;
//	printf("B: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//
//int main()
//{
//	person_A();
//	person_B();
//	return 0;
//}

//#include <stdio.h>
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("���� ������ �� : ");
//	printf("%d\n", function_test2());
//}

//#include <stdio.h>
//void sayHi()
//{
//	printf("hi");
//	return;
//}
//
//char getA()
//{
//	return 'A';
//}
//
//int get5()
//{
//	return 5;
//}
//
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}

//#include <stdio.h>
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//
//void sayHi()
//{
//	printf("hi");
//	return;
//}
//
//char getA()
//{
//	return 'A';
//}
//
//int get5()
//{
//	return 5;
//}
//
//double set1get5(int one)
//{
//	return one + 4.0;
//}

//#include <stdio.h>
//float sendCard();
//int main()
//{
//	float result = sendCard();
//	printf("%f���� ����\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<ũ�������� ī��>\n");
//	printf("��� : 0.7����\n");
//	printf("������(����:����) : ");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}

//#include <stdio.h>
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("���� �����?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}

//#include <stdio.h>
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(),getL(),getE());
//	return 0;
//}

//#include <stdio.h>
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{
//	
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(),getT());
//	return 0;
//}

//#include <stdio.h>
//void makeHamburger(int count)
//{
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_count);
//	return 0;
//}

//#include <stdio.h>
//void printf_Number();
//void printf_Number2(int num);
//void printf_Number4_charB(int num, char b);
//void printf_charaterX(char X);
//
//int main()
//{
//	printf_Number();
//	printf_Number2(2);
//	printf_Number4_charB(4, 'b');
//	printf_charaterX('X');
//	return 0;
//}
//void printf_Number()
//{
//	printf("Number\n");
//}
//void printf_Number2(int num)
//{
//	printf("Number :%d\n", num);
//}
//void printf_Number4_charB(int num, char b)
//{
//	printf("Number :%d.charater :%c\n", num, b);
//}
//void printf_charaterX(char X)
//{
//	printf("charater :%c\n", X);
//}

#include <stdio.h>
char rightType(char type)
{
	if (type != 'A' && type != 'B')
	{
		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
		return 'C';
	}
}
void makeHamberger(char type, int count)
{
	if (type == 'A')
	{
		printf("AŸ�� �ܹ���");
	}
	else
	{
		printf("BŸ�� �ܹ���");
	}
}