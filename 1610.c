#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int numTests;
	int caseIndex = 0;
	scanf("%d", &numTests);

	while (caseIndex != numTests) {
		int numDocuments,
			numDependencies;
		scanf("%d", &numDocuments);
		scanf("%d", &numDependencies);
		if (numDependencies == 1) {
			printf("NAO\n");
			int lixo;
			scanf("%d", &lixo);
			scanf("%d", &lixo);
			caseIndex++;
			continue;
		}

		//int problemMatrix = (int *)malloc(sizeof(int) * numDocuments * numDependencies);
		int problemMatrix[numDocuments][numDependencies];
		int i = 0;
		int j = 0;
		int x, y;
		for (i = 0; i < numDependencies; i++) {
			scanf("%d", &x);
			scanf("%d", &y);
			problemMatrix[x][y] = 1;
		}


		for (i = 0; i < numDocuments; i++)
			for (j = 0; j < numDependencies; j++) {
				if (problemMatrix[i][j] == 1 && problemMatrix[j][i] == 1)
					printf("SIM\n");
			}

		caseIndex++;
	}
}