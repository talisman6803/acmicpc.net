#include <stdio.h>
int main()
{
	char s[1000001];
	int cnt = 0;
	int cnt2= 1;
	scanf("%[^\n]s", s);
	for (int i = 0; s[i]; i++){
		if (s[i] == ' ') cnt2 = 1;
		else if (cnt2) {
			cnt2 = 0;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}