#include <stdio.h>
void maine()
{
	int i, j, k = 0;
	int sum = 0;
	for (i = 1;i <= 100;i++)
	{
		for (j = 1;j <= i;j++)
		{
			k = k + j;
		}
		sum = sum + k;
		k = 0;
	}

	printf("1+(1+2)+....=%d\n", sum);
}