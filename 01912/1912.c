#include <stdio.h>
#include <stdlib.h>
int compare(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int main()
{
	int n, sum = 0;
	int *arr1;
	int *arr2;
	scanf("%d", &n);
	arr1 = (int *)malloc(sizeof(int)*n);
	arr2 = (int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	arr2[0] = arr1[0];
	sum = arr1[0];
	for (int i = 1; i < n; i++) {
		arr2[i] = compare(arr2[i - 1] + arr1[i], arr1[i]);
		sum = compare(arr2[i], sum);
	}
	printf("%d", sum);
	return 0;
}