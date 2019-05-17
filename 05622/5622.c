#include <stdio.h>
int phone(char a) {
	if (65 <= a && 67 >= a) return 3;
	else if (68 <= a && 70 >= a) return 4;
	else if (71 <= a && 73 >= a) return 5;
	else if (74 <= a && 76 >= a) return 6;
	else if (77 <= a && 79 >= a) return 7;
	else if (80 <= a && 83 >= a) return 8;
	else if (84 <= a && 86 >= a) return 9;
	else if (87 <= a && 90 >= a) return 10;
	else return 0;
}
int main() {
	char dial[16] = { 0, };
	int cnt = 0;
	int t = 0;
	scanf("%s", dial);
	while (1) {
		t += phone(dial[cnt]);
		cnt++;
		if (dial[cnt] == '\0') break;
	}
	printf("%d", t);
}