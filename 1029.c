#include <stdio.h>
#include <stdlib.h>
 
int totalCalls = 0;

int fib(int n) {
	totalCalls++;
	int total = 0;
	if (n == 1) return 1;
	else if (n == 0) return 0;

	total += fib(n-1) + fib(n-2);
	return total;
}

int fib2(int n);

int main() {
	int n = 0;
	int fibResult = 0;
	int i = 0;
	int numTests = 0;
	scanf("%d", &numTests);
	for (i = 0; i < numTests; i++) {
		scanf("%d", &n);
		fibResult = fib(n);
		printf("fib(%d) = %d calls = %d\n", n, totalCalls-1, fibResult);
		totalCalls = 0;
	}
	totalCalls = 0;
}