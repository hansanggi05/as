//#include <stdio.h>
//int main()
//{
//	float a = 2.0f, b = 3.0f, c = 4.0f;
//	float result;
//	
//	result = a + b + c;
//	printf(" %5.2f + %5.2f = %5.2f\n", a, b, result);
//	result = a - b - c;
//	printf(" %5.2f - %5.2f = %5.2f\n", a, b, result);
//	result = a * b * c;
//	printf(" %5.2f * %5.2f = %5.2f \n", a, b, result);
//}

//#include <stdio.h>
//int main()
//{
//	int number , answer;
//	scanf("%d %d",&number,&answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�. \n");	
//	}
//	else
//	{
//		if(number <answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	 }
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char wasd;
//	printf("w a s d �߿��� �Է��ϼ���. ");
//	scanf("%c", &wasd);
//	if (wasd == 'w')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 'a')
//	{
//		printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 'd')
//	{
//		printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (wasd == 's')
//	{
//		printf("�Ʒ� ����⸦ �Է��ϼ̽��ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int gauge;
//	printf("0~100 ���̿� �� �Է� : ");
//	scanf("%d", &gauge);
//	if (45 <= gauge && gauge <= 55)
//	{
//		printf("Perfect\n");
//	}
//	else if (35 <= gauge && gauge <= 65)
//	{
//		printf("Excellent\n");
//	}
//	else
//	{
//		printf("good\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("������ ���� �Է� : ");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input�� 3�� ����Դϴ�. ");
//
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�. ");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�. ");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':   printf("������â ����\n");
//	case 'm':	printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':   printf("������â ����\n");
//		break;
//	case 'm':	printf("����â ����\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���.");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case 'i':   printf("������â ����\n");
//		break;
//	case 'm':	printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	printf("������ ���� �� �� �Է� ");
//	scanf("%d %d", &input1, &input2);
//
//	char oper;
//	printf("+ - * / %% �߿� �Է� ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
//	default: printf("�߸��Է�");
//	}
//	return 0;
//}
