#include <stdio.h>

int main() {
	int numTests;
	scanf("%d", &numTests);

	int i;
	int numbers[numTests];
	int multiple2 = 0;
	int multiple3 = 0;
	int multiple4 = 0;
	int multiple5 = 0;

	for (i = 0; i < numTests; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] % 2 == 0)
			multiple2++;
		if (numbers[i] % 3 == 0)
			multiple3++;
		if (numbers[i] % 4 == 0)
			multiple4++;
		if (numbers[i] % 5 == 0)
			multiple5++;
	}

	printf("%d Multiplo(s) de 2\n", multiple2);
	printf("%d Multiplo(s) de 3\n", multiple3);
	printf("%d Multiplo(s) de 4\n", multiple4);
	printf("%d Multiplo(s) de 5\n", multiple5);
}