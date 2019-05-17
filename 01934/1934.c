#include <stdio.h>
#include <stdlib.h>
int gcf(int a, int b) {
	int tmp;
	while (1) {
		tmp = a % b;
		if (tmp == 0) return b;
		else {
			a = b;
			b = tmp;
		}
	}
}
int lcm(int a, int b) {
	int tmp = a * b / gcf(a, b);
	return tmp;
 
}
int main() {
	int n, *arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr[i] = lcm(a, b);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}