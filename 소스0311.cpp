//#include <stdio.h>
//char rightType(char type)
//{
//	if (type != 'A' && type != 'B')
//	{
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//}
//void makeHamberger(char type, int count)
//{
//	if (type == 'A')
//	{
//		printf("AŸ�� �ܹ���");
//	}
//	else
//	{
//		printf("BŸ�� �ܹ���");
//	}
//	printf("%d�� ���Խ��ϴ�.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("���Ÿ�� �ܹ��Ÿ�");
//	printf("�ֹ��Ͻðڽ��ϱ�?(AorB)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C')
//	{
//		return 0;
//	}
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϴ�?.\n");
//	scanf("%d", &ham_count);
//	makeHamberger(ham_type, ham_count);
//	return 0;
//}

//#include <stdio.h>
//int add_number(int num1, int num2)
//{
//
//	int retVal = num1 + num2;
//	return retVal;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("��� : %d\n", data1);
//	return 0;
//}

//#include <stdio.h>
//int add_number(int num1, int num2)
//{
//
//	int retVal = num1 + num2;
//	return retVal;
//}
//int m_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//int X_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//
//float I_number(int num1, int num2)
//{
//	
//	float retVal = (float)num1 / num2;    
//	return retVal;
//}
//
//int main()
//{
//	int a = 3, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = m_number(a, b);
//	int data3 = X_number(a, b);
//	float data4 = I_number(a, b);
//	printf("��� : %d\n", data1);
//	printf("��� : %d\n", data2);
//	printf("��� : %d\n", data3);
//	printf("��� : %.1f\n", data4);
//	return 0;
//}

//#include <stdio.h>
//int minus(int n)
//{
//	if (n <= 1)return -3;
//	return minus(n - 1) -2;
//}
//int main()
//{
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//#include <stdio.h>
//void printf(int n)
//{
//	if (n <= 0) return;
//	printf("%d", n);
//	printf(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf(n);
//	return 0;
//}

//#include <stdio.h>
//int f(int n)
//{
//	printf("%d", n);
//	if (n <= 2)return 1;
//	printf("%d\n", n);
//	return f(n - 1) + f(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", f(n));
//	return 0;
//}

//#include <stdio.h>
//int add(int n)
//{
//	if (n <= 1)return 1;
//	return add(n - 1) + n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", add(n));
//	return 0;
//}

//#include <stdio.h>
//struct BYTE
//{
//	char a;
//	char b;
//};
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

//#include <stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//void main()
//{
//	struct student s = { 1,(char*)"�� ��",90.5 };
//	printf("���̵�: %d\n", s.id);
//	printf("�̸�: %s\n", s.name);
//	printf("����� : %lf\n", s.aver);
//}

//#include <stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//int main()
//{
//	struct GUN M416 = { "M416", 5.56,true, true, true, true, true, 30 };
//	printf("ȭ��� : %s\n", M416.name);
//	printf("ź ���� : %.2f\n", M416.bullet_type);
//	printf("����������: %s", M416.scope ? "ture" : "false");
//	return 0;
//}

//#include <stdio.h>
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON
//{
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("���� ũ�� : %d\n", sizedummy);
//	printf("vip���� ũ�� : %d\n", sizevip);
//	return 0;
//}

//#include <stdio.h>
//struct VIP_PERSON
//{
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main()
//{ 
//	VIP_PERSON lee_sam;
//	printf("�� ����� �Է��ϼ���\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 's' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}