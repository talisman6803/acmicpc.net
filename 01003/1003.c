#include <stdio.h>
int chk0[41] = { 0, };
int chk1[41] = { 0, };
void fibonacci(int n) {
	int tmp = 1;
	chk0[0] = 1;
	chk0[1] = 0;
	chk1[0] = 0;
	chk1[1] = 1;
	while (tmp <= n) {
		tmp += 1;
		chk0[tmp] = chk0[tmp - 1] + chk0[tmp - 2];
		chk1[tmp] = chk1[tmp - 1] + chk1[tmp - 2];
	}
}
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		fibonacci(n);
		printf("%d %d\n", chk0[n], chk1[n]);
	}
	return 0;
}