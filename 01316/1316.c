#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int cnt = 0;
	for (int i = 0; i < t; i++) {
		char arr[100] = { 0, };
		int chk[26] = { 0, };
		scanf("%s", arr);
		int tmp = 0;
		for (int j = 0; arr[j] != 0; j++) {
			if (tmp != arr[j]) {
				if (chk[arr[j] - 97] == 0) {
					chk[arr[j] - 97]++;
					tmp = arr[j];
				}
				else {
					cnt--;
					break;
				}
			}
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}