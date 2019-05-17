#include <stdio.h>
int self_num(int a)
{
	int sum = a;
	while (1) {if (a == 0) break; sum += a % 10; a = a / 10;}
	return sum;
}
int main()
{
	int chk[10001] = { 0, };
	for (int i = 1; i < 10001; i++) {int temp = self_num(i); if (temp <= 10000) chk[temp] = 1;}
	for (int i = 1; i < 10001; i++)
		if (chk[i] == 0) printf("%d\n", i);
	return 0;
}