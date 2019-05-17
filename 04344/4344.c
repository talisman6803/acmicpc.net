#include <stdio.h>

int main() {

	int sub = 0, n = 0;
	scanf("%d", &sub);

	while (sub--) {
		scanf("%d", &n);
		int score[1000];
		int sum = 0;
		double avg = .0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &score[i]);
			sum += score[i];
		}
		avg = (double)sum / n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (avg < score[i]) {
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt * 100 / n);
	}

	return 0;
}