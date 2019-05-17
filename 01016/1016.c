#include <stdio.h>
long long num[1000001];
#pragma warning(disable:4996)
int main() {
	long long max, min;
	int cnt = 0;
	scanf("%lld %lld", &min, &max);
	for (long long i = 2; (i*i) <= max; i++) {
		long long tmp = i * i;
		long long x = (min / tmp);
		if (min % tmp != 0) {
			x++;
		}
		while ((x*tmp) <= max) {
			num[x*tmp - min] = 1;
			x++;
		}
	}
	for (int i = 0; i <= (max - min); i++) {
		if (num[i] == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}