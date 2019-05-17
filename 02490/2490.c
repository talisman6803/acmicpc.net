#include <stdio.h>
int main()
{
	int data[3][4];
	int cnt[3] = { 0, };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &data[i][j]);
			if (data[i][j] == 1) cnt[i]++;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (cnt[i] == 0) printf("D");
		else if (cnt[i] == 1) printf("C");
		else if (cnt[i] == 2) printf("B");
		else if (cnt[i] == 3) printf("A");
		else if (cnt[i] == 4) printf("E");
		printf("\n");
	}
	return 0;
}