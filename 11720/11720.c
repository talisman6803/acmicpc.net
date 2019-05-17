#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, i, k;
	char st[100] = { 0, };
	k = 0;
	scanf("%d", &x);
	scanf("%s", &st);
	for (i = 0; i <= x-1; i++) {
		k = k + st[i] - 48;
	}
	printf("%d", k);
	return 0;
}