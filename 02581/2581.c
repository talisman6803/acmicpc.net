#include <stdio.h>
int main(){
	int f, t;
	scanf("%d\n%d", &f, &t);
	int sum = 0;
	int min = 0;
	for (int i = f; i <= t; i++) {
		int cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		if (cnt == 2) {
			sum += i;
			if (min == 0) {
				min = i;
			}
		}
	}
	if (sum == 0 && min == 0) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}