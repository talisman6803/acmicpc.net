#include <stdio.h>
int main()

{
	int i;
	char st[100] = { 0, };
	scanf("%s", &st);
	for (i = 0; i <= 100; i++) {
		printf("%c", st[i]); 
		if (st[i + 1] == '\0') break;
		if (i % 10 == 9) printf("\n");
	}
	return 0;
}