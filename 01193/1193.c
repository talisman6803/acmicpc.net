#include <stdio.h>
int main()
{
	int x, i;
	scanf("%d", &x);
	for (i = 0; x > 0; i++) x -= i;
	i--;
	if (i % 2 == 0) printf("%d/%d\n", i + x, 1 + (-x));
	else printf("%d/%d", 1 + (-x), i + x);
	return 0;
}