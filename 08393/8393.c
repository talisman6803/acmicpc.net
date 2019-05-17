#include <stdio.h>
int main()
{
	int x, i, k;
	k = 0;
	scanf("%d", &x);
	for (i = 1; i <= x; i++) {
		k = k + i;
	}
	printf("%d", k);
	return 0;
}