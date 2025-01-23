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
//		printf("숫자1이 숫자2보다 큽니다. \n");	
//	}
//	else
//	{
//		if(number <answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char wasd;
//	printf("w a s d 중에서 입력하세요. ");
//	scanf("%c", &wasd);
//	if (wasd == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (wasd == 'a')
//	{
//		printf("좌 방향기를 입력하셨습니다.\n");
//	}
//	else if (wasd == 'd')
//	{
//		printf("우 방향기를 입력하셨습니다.\n");
//	}
//	else if (wasd == 's')
//	{
//		printf("아래 방향기를 입력하셨습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int gauge;
//	printf("0~100 사이에 값 입력 : ");
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
//	printf("임의의 수를 입력 : ");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다. ");
//
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다. ");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다. ");
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
//		printf("아이템창 오픈\n");
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
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
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
//	case 'i':   printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
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
//	case 'i':   printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요.");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case 'i':   printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
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
//	printf("임의의 값을 두 개 입력 ");
//	scanf("%d %d", &input1, &input2);
//
//	char oper;
//	printf("+ - * / %% 중에 입력 ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
//	default: printf("잘못입력");
//	}
//	return 0;
//}
