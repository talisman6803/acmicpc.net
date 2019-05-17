#include <stdio.h>
#include <stdlib.h>
int main()

{
	int t, i;
	int *a;
	int *b;
	int *sum;
	scanf("%d", &t);
	a = (int *)malloc(sizeof(int)*t);
	b = (int *)malloc(sizeof(int)*t);
	sum = (int *)malloc(sizeof(int)*t);
	for (i = 0; i <= t-1; i++) {
		scanf("%d %d", &a[i], &b[i]); 
		sum[i] = a[i] + b[i];
	}
	for (i = 0; i <= t-1; i++) printf("%d\n", sum[i]);
	return 0;
}