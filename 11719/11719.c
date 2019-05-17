#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	char c;
	while (scanf("%c", &c) != -1) {
		printf("%c", c);
	}
	return 0;
}