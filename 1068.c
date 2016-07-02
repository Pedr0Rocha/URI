#include <stdio.h>
#include <stdlib.h>
 
int main() {
	char c[1001];

	while (scanf("%s", c) != EOF) {
		int cIndex = 0;
		int parenthesisCount = 0;
		while (c[cIndex] != '\0') {
			if (c[cIndex] == '(') {
				parenthesisCount++;
			} else if (c[cIndex] == ')') {
				parenthesisCount--;
				if (parenthesisCount < 0)
					break;			
			}
			cIndex++;
		}
		if (parenthesisCount == 0)
			printf("correct\n");
		else
			printf("incorrect\n");
	}
}