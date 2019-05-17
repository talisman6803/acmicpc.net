#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int n, *arr;
	int max = 0;
	scanf("%d", &n);
	int chk1[10000] = { 0, }; 
	//int chk2[10000] = { 0, };
	//arr = (int *)malloc(sizeof(int) * n); 동적할당-메모리초과오류
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		chk1[tmp-1]++;
		if (max < tmp) max = tmp;
	}
	/*chk2[0] = chk1[0];
	for (int i = 1; i <= max; i++) {
		chk2[i] = chk2[i - 1] + chk1[i];
	}*/
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < chk1[i]; j++) {
			printf("%d\n", i+1);
			//arr[chk2[i]] = i+1;
			//chk2[i]--;
		}
	}
	/*for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}*/
	return 0;
}