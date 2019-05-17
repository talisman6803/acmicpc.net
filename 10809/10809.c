#include <stdio.h>
int main()
{
	char a[102];
	int chk[26];
	int cnt = 0;
	scanf("%s", a);
	for (int i = 0; i < 26; i++) {
		chk[i] = -1;
	}
	while (1)
	{
		if (chk[a[cnt] - 97] < 0) {
			chk[a[cnt] - 97] = cnt;
		}
		cnt++;
		if (a[cnt] == '\0') {
			break;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", chk[i]);
	}
	return 0;
}