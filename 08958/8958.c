#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int num, cnt;
	int point = 0;
	scanf("%d", &num);
	arr = (int *)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++)
	{
		char test[80] = { 0, };
		point = 0;
		cnt = 0;
		scanf("%s", test);
		for (int j = 0; j < 80; j++) {
			if (test[j] == 'O') cnt++;
			else cnt = 0;
			point += cnt;
		}
		arr[i] = point;
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}