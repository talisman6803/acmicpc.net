#include <stdio.h>
int main()
{
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		for (k = 1; k <= i - 1; k++)
		{
			printf(" ");
		}
		for(j=a;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}