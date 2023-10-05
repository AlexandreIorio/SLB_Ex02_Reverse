//taken from: https://linoxide.com/system-endianness-structure-padding-c-examples/

#include <stdio.h>

union s {
	short n;
	char b;
}x;

int main() {
	x.n = 0x4142;
	if(x.b == 0x42) {
		printf("Little Endian\n");
		return 1;
	}
	else {
		printf("Big Endian\n");
		return 0;
	}
}
