#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c = 0;
	int chk[10] = { 0, };
	while (scanf("%c", &c) != EOF) {
		chk[c - 48]++;
	}
	for (int i = 9; i >= 0; i--) {
		while (chk[i] != 0) {
			printf("%d", i);
			chk[i]--;
		}
	}
	return 0;
}