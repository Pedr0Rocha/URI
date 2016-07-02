#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
	long money;
	int ingredients;
	int numCakeTypes;
} Testcase;

typedef struct {
	int ingredientQuantity;
	int ingredient;
	int recipeCost;
} Recipe;

int main() {
	int numTests = 0;
	scanf("%d", &numTests);

	int cases = 0;
	int bestResult = 0;
	Testcase testcase[numTests];
	while (cases != numTests) {
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
			Recipe recipes[pairs];
			for (j = 0; j < pairs; j++) {
				scanf("%d", &recipes[j].ingredient);
				scanf("%d", &recipes[j].ingredientQuantity);
				recipes[i].recipeCost += recipes[i].ingredient * recipes[i].ingredientQuantity;

				int howMany = testcase[cases].money / recipes[i].recipeCost;
				if (howMany > bestResult)
					bestResult = howMany;
			}
		}
		cases++;
		printf("%d\n", bestResult);
	}

}