//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("원하는 달의 숫자를 입력 : ");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("January"); break;
//	case 2:printf("February"); break;
//	case 3:printf("March"); break;
//	case 4:printf("April"); break;
//	case 5:printf("May"); break;
//	case 6:printf("June"); break;
//	case 7:printf("July"); break;
//	case 8:printf("August"); break;
//	case 9:printf("September"); break;
//	case 10:printf("October"); break;
//	case 11:printf("November"); break;
//	case 12:printf("December"); break;		
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n"); break;
//	case '>':case'd':
//		printf("오른쪽으로 이동합니다.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	const int option = 3;
//	
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9 사이의 숫자 입력 : ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9: printf("짝"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//		case 'x'; printf("알파벳 x 입력.\n"); break;
//		case 'x'; printf("엑스표 입력.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n"); break;
//	case 'X': printf("엑스표 입력.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1 :
//	int number1, number2;
//	printf("숫자 두 개를 입력하세요 \n");
//	scanf("%d %d", &number1, &number2);
//	printf("%d + %d = %d\n", number1, number2, number1 + number2); break;
//	case 2:
//	int number3, number4;
//	printf("숫자 두 개를 입력하세요 \n");
//	scanf("%d %d", &number3, &number4);
//	printf("%d - %d = %d\n", number3, number4, number3 - number4); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2); break;
//	}
//
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char wasd;
//	printf("w a s d 중에서 입력 : ");
//	scanf("%c", &wasd);
//	switch (wasd)
//	{
//	case 'w':printf("위 방향키를 입력하셨습니다.\n"); break;
//	case 'a':printf("좌 방향기를 입력하셨습니다.\n"); break;
//	case 's':printf("아래 방향기를 입력하셨습니다.\n"); break;
//	case 'd':printf("우 방향기를 입력하셨습니다.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("메뉴를 선택하기\n");
//	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
//	printf("mainDish 1.스테이크 2.생선요리 3.양갈비\n");
//	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//	switch (appetizer)
//	{
//	case 1: printf("주문한 음식은 캐비어"); break;
//	case 2: printf("주문한 음식은 샐러드"); break;
//	case 3: printf("주문한 음식은 푸아그라"); break;
//	}
//	switch (mainDish)
//	{
//	case 1: printf(", 스테이크,"); break;
//	case 2: printf(", 생선요리,"); break;
//	case 3: printf(", 양갈비,"); break;
//	}
//	switch (dessert)
//	{
//	case 1: printf(" 캐잌입니다."); break;
//	case 2: printf(" 아이스크림입니다."); break;
//	case 3: printf(" 초콜릿무스입니다."); break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	while (i < 100)
	{
		printf("%3d(%02x) ", i, i);
		if (i >= 70 && i < 80) { i++; continue; }
		if (i % 10 == 9) printf("\n");
		if (i == 93) break;
		i++;
	}
	return 0;
}