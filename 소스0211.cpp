//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		break;
//	} while (temperature > 28);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case NEWGAME:printf("새 게임 시작\n"); break;
//		case LOADGAME:printf("세이브 데이터 로드\n"); break;
//		case OPTION:printf("옵션 세팅\n"); break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들 (그 외 종료)\n");
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:printf("로그인 중...\n"); break;
//		case 2:printf("회원가입 중...\n"); break;
//		case 3:printf("옵션 세팅\n"); break;
//		case 4:printf("만든 사람\n"); break;
//		}
//	} while (select >=1 && select <=4 );
//	printf("종료합니다.\n");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d번 째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command != 1)break;
//		int randInt = rand() % 5 + 1;
//		switch (randInt)
//		{
//		case 1:printf("기분이 좋네요.\n");
//		case 3:printf("도서관에서. "); break;
//		case 2:printf("기분이 나빠요.\n");
//		case 4:printf("카페에서 "); break;
//		case 5:printf("학원에서  ");
//		}printf("코딩 공부합니다\n");
//		study++;
//	} while (1);
//	if (day <= 3) { printf("그대로입니다...\n"); }
//	else {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:printf("코딩새싹이 되었습니다.!\n"); break;
//		case 1:printf("프로그래머가 되었습니다.!\n"); break;
//		case 2:printf("FrontEnd 개발자가 되었습니다.!\n"); break;
//		case 3:printf("BackEnd 개발자가 되었습니다.!\n"); break;
//		default:printf("풀스택 개발자가 되었습니다.!\n");
//			break;
//		}
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int study2 = 0;
	int study3 = 0;
	do {
		printf("\n%d번 째 날 !\n", ++day);
		printf("오늘은 뭐 할까요?\n");
		printf("1. 코딩공부한다. 2. 운동한다. 3. 한다.\n");
		printf("그외. 끝낸다.\n >>");
		scanf("%d", &command);
		if (command <1 || command >3)break;
		if (command == 1) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("기분이 좋네요.\n");
			case 3:printf("도서관에서 "); break;
			case 2:printf("기분이 나빠요.\n");
			case 4:printf("카페에서 "); break;
			case 5:printf("학원에서  "); break;
			}printf("코딩공부합니다\n");
			study++;
		}
		if (command == 2) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("기분이 좋네요.\n");
			case 3:printf("헬스장에서 "); break;
			case 2:printf("기분이 나빠요.\n");
			case 4:printf("공원에서 "); break;
			case 5:printf("집에서  "); break;
			}printf("운동합니다\n");
			study2++;
		}
		if (command == 3) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("기분이 좋네요.\n");
			case 3:printf("헬스장에서 "); break;
			case 2:printf("기분이 나빠요.\n");
			case 4:printf("공원에서 "); break;
			case 5:printf("집에서  "); break;
			}printf("운동합니다\n");
			study3++;
		}
	} while (1);
	if (day <= 3) { printf("그대로입니다...\n"); }
	else {
		int level = study / 8;
		switch (level)
		{
		case 0:printf("코딩새싹이 되었습니다.!\n"); break;
		case 1:printf("프로그래머가 되었습니다.!\n"); break;
		case 2:printf("FrontEnd 개발자가 되었습니다.!\n"); break;
		case 3:printf("BackEnd 개발자가 되었습니다.!\n"); break;
		default:printf("풀스택 개발자가 되었습니다.!\n");
			break;
		}
	}
	return 0;
}