#include <stdio.h>

void main()
{
	int i;
	printf("숫자를 입력하고 Enter>\n");
	scanf_s("%d", &i);

	printf("단위\n");
	while(i!=0)
	{
		printf("1000단위 : %d \n", i / 1000);
		i = i%1000;
		printf("100단위 ; %d\n", i / 100);
		i = i%100;
		printf("10단위 ; %d\n", i / 10);
		i = i % 10;
		printf("1단위 ; %d\n", i / 1);
		break;
	}
}