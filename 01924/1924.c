#include <stdio.h>
int main()
{
	int x, y, i, day;
	day = 0;
	int mon[12] = {0,31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d %d", &x, &y);
	for (i = 1; i <= x; i++) {
		day = day + mon[i-1];
	}
	day = day + y;
	if (day % 7 == 0) printf("SUN");
	if (day % 7 == 1) printf("MON");
	if (day % 7 == 2) printf("TUE");
	if (day % 7 == 3) printf("WED");
	if (day % 7 == 4) printf("THU");
	if (day % 7 == 5) printf("FRI");
	if (day % 7 == 6) printf("SAT");
	return 0;
}