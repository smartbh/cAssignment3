#include <stdio.h>

void main()
{
	int i, sum = 0;

	for (int i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
		printf("1���� 100���� Ȧ�� ���� = %d\n", sum);
	}
}