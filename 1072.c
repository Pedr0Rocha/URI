#include <stdio.h>
#include <stdlib.h>

int main() {
	int numTests;
	scanf("%d", &numTests);

	int i = 0;
	int in = 0;
	int out = 0;
	int n = 0;
	for (i = 0; i < numTests; i++) {
		scanf("%d", &n);
		if (n >= 10 && n <= 20)
			in++;
		else 
			out++;
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
}