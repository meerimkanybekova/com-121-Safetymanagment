#include <stdio.h>

int main() {
	for (char c = 33, counter = 1; c < 127; c++, counter++) {
		putchar(c);
		if (counter % 16 == 0) {
			putchar('\n');
		}
	}

	putchar('\n');
	return 0;
}
