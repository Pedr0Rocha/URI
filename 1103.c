#include <stdio.h>
#include <stdlib.h>

int main() {
	int h1, m1, h2, m2;

	while (1) {
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)
			break;

		if (h1 > h2 || h1 == h2 && m1 > m2) {
			int hours = (24 - abs(h1 - h2)) * 60;
			printf("%d\n", (hours - (m1 - m2)));
			continue;
		}

		int total1 = 0;
		while (h1--) {
			total1 += 60;
		}
		total1 += m1;

		int total2 = 0;
		while (h2--) {
			total2 += 60;
		}
		total2 += m2;

		printf("%d\n", (total2 - total1));
	}
}