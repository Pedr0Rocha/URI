#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
	long money;
	int ingredients;
	int numCakeTypes;
} Testcase;

int main() {
	int numTests = 0;
	scanf("%d", &numTests);

	int cases = 0;
	int bestResult = 0;
	Testcase testcase[numTests];
	while (cases != numTests) {
		bestResult = 0;
		scanf("%ld", &testcase[cases].money);
		scanf("%d", &testcase[cases].ingredients);
		scanf("%d", &testcase[cases].numCakeTypes);

		int ingredientsPrice[testcase[cases].ingredients];
		int i = 0;
		int j = 0;
		for (i = 0; i < testcase[cases].ingredients; i++)
			scanf("%d", &ingredientsPrice[i]);

		for (i = 0; i < testcase[cases].numCakeTypes; i++) {
			int pairs = 0;
			scanf("%d", &pairs);
			int recipeCost = 0;
			for (j = 0; j < pairs; j++) {
				int ingredient, 
					ingredientQuantity;
				scanf("%d", &ingredient);
				scanf("%d", &ingredientQuantity);

				recipeCost += ingredientsPrice[ingredient] * ingredientQuantity;
			}
			int howManyCakes = testcase[cases].money / recipeCost;
			if (howManyCakes > bestResult)
				bestResult = howManyCakes;
		}
		cases++;
		printf("%d\n", bestResult);
	}

}