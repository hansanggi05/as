//#include <stdio.h>
//int var = 0;
//void func1()
//{
//	int var = 111;
//}
//void func2()
//{
//	var = 222;
//}
//void main()
//{
//	printf("%d", var);
//	func1();
//	printf("%d", var);
//	func2();
//	printf("%d", var);
//}

//#include <stdio.h>
//struct byte
//{
//	char name[8];
//};
//struct byte2 
//{
//	int a;
//	float b;
//};
//int main()
//{
//	int sizebyte = sizeof(byte);
//	int sizebyte2 = sizeof(byte2);
//	printf("크기 : %d\n", sizebyte);
//	printf("크기 : %d\n", sizebyte2);
//}

//#include <stdio.h>
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//int main()
//{
//	__dummy__ dy;
//	scanf("%d", &dy.data_0);
//	scanf(" %c", &dy.data_1);
//	scanf("%f", &dy.data_2);
//
//	printf("%d\n", dy.data_0);
//	printf("%c\n", dy.data_1);
//	printf("%.2f", dy.data_2);
//}

//#include <stdio.h>
//short getDefaultData();
//void printData(short pt2);
//int add5(int pt);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = add5(pt);
//	printData(pt);
//}
//
//int add5(int pt)
//{
//	pt+=5;
//	return pt;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

#include <stdio.h>

struct POINT
{
	short x, y;
};

POINT getDefaultData();
void printData(short pt2);
POINT add5(short pt);

void main()
{
	POINT pt;
	
	pt = getDefaultData();
	printData(pt.x);
	printData(pt.y);
	pt = add5(pt.x);
	printData(pt.x);
	printData(pt.y);
}

POINT add5(short pt)
{
	POINT pt1;
	pt1.x += 5;
	pt1.y += 5;
	return pt1;
}

POINT getDefaultData()
{
	POINT pt1;
	scanf("%hd", &pt1.x);
	scanf("%hd", &pt1.y);
	return pt1;
}

void printData(short pt2)
{
	printf("값 : %hd\n", pt2);
}