//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d��\n", temperature);
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
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case NEWGAME:printf("�� ���� ����\n"); break;
//		case LOADGAME:printf("���̺� ������ �ε�\n"); break;
//		case OPTION:printf("�ɼ� ����\n"); break;
//		}
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�α��� 2.ȸ������ 3.�ɼ� 4.���� ����� (�� �� ����)\n");
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:printf("�α��� ��...\n"); break;
//		case 2:printf("ȸ������ ��...\n"); break;
//		case 3:printf("�ɼ� ����\n"); break;
//		case 4:printf("���� ���\n"); break;
//		}
//	} while (select >=1 && select <=4 );
//	printf("�����մϴ�.\n");
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
//		printf("\n%d�� ° �� !\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ�.\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//		if (command != 1)break;
//		int randInt = rand() % 5 + 1;
//		switch (randInt)
//		{
//		case 1:printf("����� ���׿�.\n");
//		case 3:printf("����������. "); break;
//		case 2:printf("����� ������.\n");
//		case 4:printf("ī�信�� "); break;
//		case 5:printf("�п�����  ");
//		}printf("�ڵ� �����մϴ�\n");
//		study++;
//	} while (1);
//	if (day <= 3) { printf("�״���Դϴ�...\n"); }
//	else {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:printf("�ڵ������� �Ǿ����ϴ�.!\n"); break;
//		case 1:printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n"); break;
//		case 2:printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
//		case 3:printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
//		default:printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
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
		printf("\n%d�� ° �� !\n", ++day);
		printf("������ �� �ұ��?\n");
		printf("1. �ڵ������Ѵ�. 2. ��Ѵ�. 3. �Ѵ�.\n");
		printf("�׿�. ������.\n >>");
		scanf("%d", &command);
		if (command <1 || command >3)break;
		if (command == 1) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("����� ���׿�.\n");
			case 3:printf("���������� "); break;
			case 2:printf("����� ������.\n");
			case 4:printf("ī�信�� "); break;
			case 5:printf("�п�����  "); break;
			}printf("�ڵ������մϴ�\n");
			study++;
		}
		if (command == 2) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("����� ���׿�.\n");
			case 3:printf("�ｺ�忡�� "); break;
			case 2:printf("����� ������.\n");
			case 4:printf("�������� "); break;
			case 5:printf("������  "); break;
			}printf("��մϴ�\n");
			study2++;
		}
		if (command == 3) {
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1:printf("����� ���׿�.\n");
			case 3:printf("�ｺ�忡�� "); break;
			case 2:printf("����� ������.\n");
			case 4:printf("�������� "); break;
			case 5:printf("������  "); break;
			}printf("��մϴ�\n");
			study3++;
		}
	} while (1);
	if (day <= 3) { printf("�״���Դϴ�...\n"); }
	else {
		int level = study / 8;
		switch (level)
		{
		case 0:printf("�ڵ������� �Ǿ����ϴ�.!\n"); break;
		case 1:printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n"); break;
		case 2:printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
		case 3:printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
		default:printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		}
	}
	return 0;
}