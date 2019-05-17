#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp != 1) {
			for (int j = 2; j < tmp; j++) {
				if (tmp % j == 0) {
					cnt--;
					break;
				}
			}
		}
		else cnt--;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}