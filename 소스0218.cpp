//#include <stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	int e=1;
//	printf("���ڸ� ���� �� �Է� : ");
//	scanf("%d", &i);
//	int ori = i;
//	while (i > 0) {
//		i /= 10;
//		count++;
//		e *= 10;
//	}
//	//printf("�ڸ� �� %d\n", count);
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
		printf("\n%d�� ° �� !\n", ++day);
		printf("������ �� �ұ��?\n");
		printf("1. �ڵ������Ѵ�. 2. ��Ѵ�. 3. ��Ʃ�긦 ��´�.\n");
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
			int randInt = rand() % 4 + 1;
			switch (randInt)
			{
			case 1:printf("����� ���׿�.\n");
			case 3:printf("������ "); break;
			case 2:printf("����� ������.\n");
			case 4:printf("ī�信�� "); break;
			}printf("��Ʃ�긦 ����ϴ�\n");
			study3++;
		}
	} while (1);
	if (day <= 3) { printf("�״���Դϴ�...\n"); }
	else {
		int level = study / 8;
		int level2 = study2 / 8;
		int level3 = study3 / 8;
		switch (level)
		{
		case 0:printf("�ڵ������� �Ǿ����ϴ�.!\n"); break;
		case 1:printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n"); break;
		case 2:printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
		case 3:printf("BackEnd �����ڰ� �Ǿ����ϴ�.!\n"); break;
		default:printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
			break;
		}
		switch (level2)
		{
		case 0:printf("��ʺ��� �Ǿ����ϴ�.!\n"); break;
		case 1:printf("Ʈ���̳ʰ� �Ǿ����ϴ�.!\n"); break;
		case 2:printf("������� �Ǿ����ϴ�.!\n"); break;
		default:printf("�ְ��� ������� �Ǿ����ϴ�.!\n");
			break;
		}
		switch (level3)
		{
		case 0:printf("��Ʃ���ʺ��� �Ǿ����ϴ�.!\n"); break;
		case 1:printf("�����ڰ� �Ǿ����ϴ�.!\n"); break;
		case 2:printf("10����Ʃ���� �Ǿ����ϴ�.!\n"); break;
		case 3:printf("50����Ʃ���� �Ǿ����ϴ�.!\n"); break;
		default:printf("100����Ʃ�� �Ǿ����ϴ�.!\n");
			break;
		}
	}
	return 0;
}
