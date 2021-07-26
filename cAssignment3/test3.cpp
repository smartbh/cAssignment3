#include <stdio.h>

void main()
{
	int i, sum = 0;

	for (int i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
		printf("1부터 100까지 홀수 합은 = %d\n", sum);
	}
}