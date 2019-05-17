#include <stdio.h>
#include <stdlib.h>
int static compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
int main() {
	int h[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &h[i]);
		sum += h[i];
	}
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int chk = sum - h[i] - h[j];
			if (i != j && chk == 100) {
				h[i] = 0;
				h[j] = 0;
				cnt++;
			}
			if (cnt != 0) break;
		}
		if (cnt != 0) break;
	}
	qsort(h, 9, sizeof(int), compare);
	for (int i = 2; i < 9; i++) {
		printf("%d\n", h[i]);
	}
	return 0;
}