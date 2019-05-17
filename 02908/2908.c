#include <stdio.h>
int sangsu(int a)
{
	int tmp1, tmp2;
	tmp1 = a / 100;
	tmp2 = a % 10;
	a = (a % 100) + (a % 10) * 99 + a / 100;
	return a;
}
int main()
{
	int ori[2];
	scanf("%d %d", &ori[0], &ori[1]);
	ori[0] = sangsu(ori[0]);
	ori[1] = sangsu(ori[1]);
	if (ori[0] > ori[1]) printf("%d", ori[0]);
	else printf("%d", ori[1]);
	return 0;
}