//#include <stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	int e=1;
//	printf("숫자를 여러 개 입력 : ");
//	scanf("%d", &i);
//	int ori = i;
//	while (i > 0) {
//		i /= 10;
//		count++;
//		e *= 10;
//	}
//	//printf("자리 수 %d\n", count);
//	e /= 10;
//	//printf("%d\n", e);
//	int a=ori;
//	int m = e / 1;
//	int k;
//	while (a != 0)
//	{
//		ori = a / m;
//		//printf("%d\n",ori);
//		k = 0;
//		while (k<ori) 
//		{
//			printf("\u2665\u2665");
//			k++;
//		}
//		printf("\n");
//		a = a % m;
//		m /= 10;
//	}
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
		printf("1. 코딩공부한다. 2. 운동한다. 3. 유튜브를 찍는다.\n");
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
			int randInt = rand() % 4 + 1;
			switch (randInt)
			{
			case 1:printf("기분이 좋네요.\n");
			case 3:printf("집에서 "); break;
			case 2:printf("기분이 나빠요.\n");
			case 4:printf("카페에서 "); break;
			}printf("유튜브를 찍습니다\n");
			study3++;
		}
	} while (1);
	if (day <= 3) { printf("그대로입니다...\n"); }
	else {
		int level = study / 8;
		int level2 = study2 / 8;
		int level3 = study3 / 8;
		switch (level)
		{
		case 0:printf("코딩새싹이 되었습니다.!\n"); break;
		case 1:printf("프로그래머가 되었습니다.!\n"); break;
		case 2:printf("FrontEnd 개발자가 되었습니다.!\n"); break;
		case 3:printf("BackEnd 개발자가 되었습니다.!\n"); break;
		default:printf("풀스택 개발자가 되었습니다.!\n");
			break;
		}
		switch (level2)
		{
		case 0:printf("운동초보이 되었습니다.!\n"); break;
		case 1:printf("트레이너가 되었습니다.!\n"); break;
		case 2:printf("운동선수가 되었습니다.!\n"); break;
		default:printf("최고의 운동선수가 되었습니다.!\n");
			break;
		}
		switch (level3)
		{
		case 0:printf("유튜브초보가 되었습니다.!\n"); break;
		case 1:printf("편집자가 되었습니다.!\n"); break;
		case 2:printf("10만유튜버가 되었습니다.!\n"); break;
		case 3:printf("50만유튜버가 되었습니다.!\n"); break;
		default:printf("100만유튜버 되었습니다.!\n");
			break;
		}
	}
	return 0;
}
