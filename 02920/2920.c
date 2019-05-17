#include <stdio.h>
int main()
{
	int arr[8];
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 8; i++) {
		if (arr[i] == i + 1) cnt1++;
		if (arr[i] == 8 - i) cnt2++;
	}
	if (cnt1 == 8) printf("ascending");
	else if (cnt2 == 8) printf("descending");
	else printf("mixed");

	return 0;
}