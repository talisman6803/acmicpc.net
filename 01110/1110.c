#include <stdio.h>

int main() {
	int num;
	int cnt = 0;
	int a, b, c, add;
	scanf("%d", &num);
	add = num;
	while (add != num || cnt == 0) {
		a= add / 10;
		b = add % 10;
		c = (a + b) % 10;
		a = b; b = c;
		add = a * 10 + b;
		cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}