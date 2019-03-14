#include <stdio.h>

int main() {
	int i, sum = 0;
	for (i = 1; i <= 10; i++) sum += i;
	fprintf(stdout, "Sum 1-10 = %d\n", sum);
}