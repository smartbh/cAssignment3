#include <stdio.h>

void main()
{
	int i;
	printf("���ڸ� �Է��ϰ� Enter>\n");
	scanf_s("%d", &i);

	printf("����\n");
	while(i!=0)
	{
		printf("1000���� : %d \n", i / 1000);
		i = i%1000;
		printf("100���� ; %d\n", i / 100);
		i = i%100;
		printf("10���� ; %d\n", i / 10);
		i = i % 10;
		printf("1���� ; %d\n", i / 1);
		break;
	}
}