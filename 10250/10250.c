#include <stdio.h>
int main() {
	int t, h, w, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		int h1 = n % h;
		if (h1 == 0) {
			printf("%d\n", h * 100 + (int)(n / h));
		}
		else {
			printf("%d\n", h1 * 100 + (int)((n / h) + 1));
		}
	}
	return 0;
}