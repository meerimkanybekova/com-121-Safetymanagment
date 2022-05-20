#include <stdio.h>

int main() {
	int month;
	scanf("%d", &month);

	char *season;
	if (month > 12) {
		goto L4;
	}
	if (month < 0) {
		goto L4;
	}
	void *branch_table[] = {&&L4, &&L0, &&L0, &&L1, &&L1, &&L1, &&L2, &&L2, &&L2, &&L3, &&L3, &&L3, &&L0};
	goto *branch_table[month];

L0:
	season = "Winter";
	goto L5;
L1:
        season = "Spring";
        goto L5;
L2:
        season = "Summer";
        goto L5;
L3:
        season = "Fall";
        goto L5;
L4:
        season = "Invalid month number.";
        goto L5;
L5:
        puts(season);
        return 0;
}

