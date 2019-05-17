#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main() {
	int m, n;
	scanf("%d\n%d", &m, &n);
	int chk = 0;
	int sum = 0;
	for (int i = 1; pow(i, 2) <= n; i++) {
		int tmp = pow(i, 2);
		if (tmp >= m) {
			if (chk == 0) chk = tmp;
			sum += tmp;
		}
	}
	if (sum == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d\n%d", sum, chk);
	}
	return 0;
}