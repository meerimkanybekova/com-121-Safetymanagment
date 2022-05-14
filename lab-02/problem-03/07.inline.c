#include <stdio.h>

#define CHARACTERS_PER_ROW 16
#define FIRST_CHARACTER 33
#define LAST_CHARACTER 126

int main() {
	int c = FIRST_CHARACTER;
	int counter = 1;
	asm(
		"L0:"
		"cmpb $126, %0;"
		"je L2;"
		"movl %0, %%edi;"
		"call putchar;"
		"movl %1, %%eax;"
		"and $15, %%eax;"
		"jne L1;"
		"mov $10, %%edi;"
		"call putchar;"
		"L1:"
		"addl $1, %0;"
		"addl $1, %1;"
		"jmp L0;"
		"L2:"
		:"+m"(c), "+m"(counter)
		:
		:"eax", "edi"
	);

	putchar('\n');
	return 0;
}
