#include <stdio.h>

int main() {
	int n, count;
	scanf("%d", &n);

	if (n == 4 || n == 7) {
		printf("-1\n");
		return 0;
	}

	count = n / 5;
	switch (n % 5)
	{
	case 0:
		printf("%d\n", count);
		break;
	case 1:
	case 3:
		printf("%d\n", count + 1);
		break;
	case 2:
	case 4:
		printf("%d\n", count + 2);
		break;
	}
	return 0;
}
 