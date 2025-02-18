#include <stdio.h>
int main()
{
	int i;
	int count = 0;
	printf("숫자를 여러 개 입력 : ");
	scanf("%d", &i);
	while (i>0) {
		i /= 10;
		 count++;
	}
	printf("자리 수 %d\n",count);
	
}