#include <stdio.h>
int main()
{
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		for(k=a-i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}