//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("���ϴ� ���� ���ڸ� �Է� : ");
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
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("�������� �̵��մϴ�.\n"); break;
//	case '>':case'd':
//		printf("���������� �̵��մϴ�.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default :
//		printf("������ ����� �����ϴ�.\n");
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
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9 ������ ���� �Է� : ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9: printf("¦"); break;
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
//		case 'x'; printf("���ĺ� x �Է�.\n"); break;
//		case 'x'; printf("����ǥ �Է�.\n"); break;
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
//	case 'x': printf("���ĺ� x �Է�.\n"); break;
//	case 'X': printf("����ǥ �Է�.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1 :
//	int number1, number2;
//	printf("���� �� ���� �Է��ϼ��� \n");
//	scanf("%d %d", &number1, &number2);
//	printf("%d + %d = %d\n", number1, number2, number1 + number2); break;
//	case 2:
//	int number3, number4;
//	printf("���� �� ���� �Է��ϼ��� \n");
//	scanf("%d %d", &number3, &number4);
//	printf("%d - %d = %d\n", number3, number4, number3 - number4); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2); break;
//	}
//
//	case 2:
//	{
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char wasd;
//	printf("w a s d �߿��� �Է� : ");
//	scanf("%c", &wasd);
//	switch (wasd)
//	{
//	case 'w':printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n"); break;
//	case 'a':printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n"); break;
//	case 's':printf("�Ʒ� ����⸦ �Է��ϼ̽��ϴ�.\n"); break;
//	case 'd':printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("�޴��� �����ϱ�\n");
//	printf("appetizer 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶�\n");
//	printf("mainDish 1.������ũ 2.�����丮 3.�簥��\n");
//	printf("dessert 1.�ɟ� 2.���̽�ũ�� 3.���ݸ�����\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//	switch (appetizer)
//	{
//	case 1: printf("�ֹ��� ������ ĳ���"); break;
//	case 2: printf("�ֹ��� ������ ������"); break;
//	case 3: printf("�ֹ��� ������ Ǫ�Ʊ׶�"); break;
//	}
//	switch (mainDish)
//	{
//	case 1: printf(", ������ũ,"); break;
//	case 2: printf(", �����丮,"); break;
//	case 3: printf(", �簥��,"); break;
//	}
//	switch (dessert)
//	{
//	case 1: printf(" ĳ���Դϴ�."); break;
//	case 2: printf(" ���̽�ũ���Դϴ�."); break;
//	case 3: printf(" ���ݸ������Դϴ�."); break;
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