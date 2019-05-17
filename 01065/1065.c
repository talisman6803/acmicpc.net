#include <stdio.h>
int cnt = 0;
void chk_num(int a)
{
	int count = 0, k[3] = { 0, };
	if (a <= 99) cnt++;
	else if(a >= 100 && a < 1000) {
		k[0] = a % 10; a = a / 10;
		k[1] = a % 10; a = a / 10;
		k[2] = a % 10;
		if (k[0] - k[1] == k[1] - k[2]) cnt++;
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		chk_num(i);
	}
	printf("%d", cnt);
}