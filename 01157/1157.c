#include <stdio.h>
int main()
{
	char c[1000000] = { 0, };
	int cnt[26] = { 0, };
	scanf("%s", c);
	for (int i = 0; c[i] != 0; i++) {
		if (c[i] >= 97) {
			cnt[c[i] - 97]++;
		}
		else {
			cnt[c[i] - 65]++;
		}
	}
	int max = 0;
	int chk = 0;
	int tmp = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] == cnt[tmp]) {
			chk++;
		}
		if (cnt[i] > max) {
			max = cnt[i];
			tmp = i;
			chk = 0;
		}
	}
	if (chk == 0) {
		printf("%c", tmp + 65);
	}
	else {
		printf("?");
	}
	return 0;
}