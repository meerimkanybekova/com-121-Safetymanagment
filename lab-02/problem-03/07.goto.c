#include <stdio.h>

#define CHARACTERS_PER_ROW 16
#define FIRST_CHARACTER 33
#define LAST_CHARACTER 126

int main() {
	char c = FIRST_CHARACTER;
	int counter = 1;
L0:
	if (c > LAST_CHARACTER) {
		goto L2;
	}
	putchar(c);
	if ((counter & (CHARACTERS_PER_ROW - 1)) != 0) {
		goto L1;
	}
	putchar('\n');
L1:
	c = c + 1;
	counter = counter + 1;
	goto L0;
L2:
	putchar('\n');
	return 0;
}
