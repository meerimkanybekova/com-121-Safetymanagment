#include <stdio.h>

int main() {
	puts("what is your full name? ");
	char name[512];
	gets(name);

	printf("Hello, %s!\n", name);
	return 0;
}
