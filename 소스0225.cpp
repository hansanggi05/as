//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1)
//		printf("%.1f\n", sqLine);
//}

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//
//	myClass++;
//	for(student=1;student<=3;student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 3; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int f;
//	int s;
//	for (f = 2; f <= 9; f++)
//	{
//		for (s = 1; s <= 9; s++)
//		{
//			printf("%d X %d = %2d\n", f, s, f * s);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int f;
//	int s;
//	for (f = 2; f <= 9; f++)
//	{
//		if (f == 3)
//		{
//			continue;
//		}
//		for (s = 1; s <= 9; s++)
//		{
//			printf("%d X %d = %2d\n", f, s, f * s);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int f;
//	int s;
//	for (f = 1; f <= 4; f++)
//	{
//		for (s = 1; s <= 6; s++)
//		{
//			printf("4면 - %d   6면 - %d\n",f,s);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입 \n",outer);
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer=0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter1,inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int	inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 4; outer++)
//	{
//
//		for (inter2 = 0; inter2 < 4 - outer; inter2++)
//		{
//			printf("*");
//		}
//		for (inter1 = 0; inter1 <outer +1; inter1++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	/*printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");*/
//
//	/*for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");*/
//	
//	/*int y = 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;*/
//
//	/*int y = 1;
//
//	for (;y<=3;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y += 1;
//	}*/
//
//	int LINE = 3;
//	printf("몇줄>>");
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	/*printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("\n");*/
//
//	/*for (int x = 4; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 3; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 2; x >= 1; x--)
//		printf("*");
//	printf("\n");
//
//	for (int x = 1; x >= 1; x--)
//		printf("*");
//	printf("\n");*/
//
//	/*int y = 4;
//
//	for (int x = y; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//
//	for (int x = y; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//
//	for (int x = y; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//
//	for (int x = y; x >= 1; x--)
//		printf("*");
//	printf("\n"); 
//	y -= 1;*/
//
//	/*int y = 4;
//	for (; y >= 1;)
//	{
//		for (int x = y; x >= 1; x--)
//			printf("*");
//		printf("\n");
//		y -= 1;
//	}*/
//	
//	/*int Line=4;
//	for (int y = Line; y >= 1; y -= 1)
//	{
//		for (int x = y; x >= 1; x--)
//			printf("*");
//		printf("\n");
//	}*/
//
//	int Line=4;
//	printf("몇줄>>");
//	scanf("%d", &Line);
//	for (int y = Line; y >= 1; y -= 1)
//	{
//		for (int x = y; x >= 1; x--)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	/*printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");*/
//
//	/*for (int x = 3; x >= 1; x--)
//		printf(" ");
//	for (int x = 1; x >= 1; x--)
//		printf("*");
//	for (int x = 3; x >= 1; x--)
//		printf(" ");
//	printf("\n");
//	for (int x = 2; x >= 1; x--)
//		printf(" ");
//	for (int x = 3; x >= 1; x--)
//		printf("*");
//	for (int x = 2; x >= 1; x--)
//		printf(" ");
//	printf("\n");
//	for (int x = 1; x >= 1; x--)
//		printf(" ");
//	for (int x = 5; x >= 1; x--)
//		printf("*");
//	for (int x = 1; x >= 1; x--)
//		printf(" ");
//	printf("\n");
//	for (int x = 7; x >= 1; x--)
//		printf("*");
//	printf("\n");*/
//
//	/*int y = 2;
//	int m = 1;
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
//	for (int x = y; x >= 1; x--)
//		printf(" ");
//	for (int x = m; x >= 1; x--)
//		printf("*");
//	printf("\n");
//	y -= 1;
//	m += 2;*/
//
//	/*int y = 2;
//	int m = 1;
//
//	for (; y >= 0;)
//	{
//		for (int x = y; x >= 1; x--)
//			printf(" ");
//		for (int x = m; x >= 1; x--)
//			printf("*");
//		printf("\n");
//		y -= 1;
//		m += 2;
//	}*/
//
//	/*int y = 2;
//	int m = 1;
//	int Line = 0;
//	for (; y >= Line;)
//	{
//		for (int x = y; x >= 1; x--)
//			printf(" ");
//		for (int x = m; x >= 1; x--)
//			printf("*");
//		printf("\n");
//		y -= 1;
//		m += 2;
//	}*/
//
//	
//	int Line = 3;
//	printf("몇 줄>>");
//	scanf("%d", &Line);
//	int m = 1;
//	for (int y = Line-1; y >= 0; y -= 1)
//	{
//		for (int x = y; x >= 1; x--)
//			printf(" ");
//		for (int x = m; x >= 1; x--)
//			printf("*");
//		printf("\n");
//		m += 2;
//	}
//
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	/*printf(" ");
	printf(" ");
	printf("*");
	printf("\n");
	printf(" ");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf(" ");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf(" ");
	printf(" ");
	printf("*");
	printf("\n");*/

	/*for (int x = 2; x >= 1; x--)
		printf(" ");
	for (int x = 1; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 1; x >= 1; x--)
		printf(" ");
	for (int x = 3; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 0; x >= 1; x--)
		printf(" ");
	for (int x = 5; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 0; x >= 1; x--)
		printf(" ");
	for (int x = 5; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 1; x >= 1; x--)
		printf(" ");
	for (int x = 3; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 2; x >= 1; x--)
		printf(" ");
	for (int x = 1; x >= 1; x--)
		printf("*");
	printf("\n");*/

	int y = 2;
	int m = 1;



	for (int x = y; x >= 1; x--)
		printf(" ");
	for (int x = m; x >= 1; x--)
		printf("*");
	printf("\n");
	y -= 1;
	m += 2;

	for (int x = y; x >= 1; x--)
		printf(" ");
	for (int x = m; x >= 1; x--)
		printf("*");
	printf("\n");
	y -= 1;
	m += 2;

	for (int x = 2; x >= 1; x--)
	{
		for (int x = y; x >= 1; x--)
			printf(" ");
		for (int x = m; x >= 1; x--)
			printf("*");
		printf("\n");
	}
	y += 1;
	m -= 2;


	for (int x = 1; x >= 1; x--)
		printf(" ");
	for (int x = 3; x >= 1; x--)
		printf("*");
	printf("\n");

	for (int x = 2; x >= 1; x--)
		printf(" ");
	for (int x = 1; x >= 1; x--)
		printf("*");
	printf("\n");

























}