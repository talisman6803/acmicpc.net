#include <stdio.h>
int main()
{
	int chk[10] = { 0, }, n1, n2, n3, num;
	int cnt = 0;
	scanf("%d %d %d", &n1, &n2, &n3);
	num = n1 * n2 * n3;
	while (1) {
		int n1 = num % 10;
		chk[n1]++;
		num = num / 10;
		if (num == 0) break;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", chk[i]);
	}
	return 0;
} 