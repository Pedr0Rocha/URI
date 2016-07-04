#include <stdio.h>
#include <stdlib.h>

int main() {
	int posX, posY;
	int destX, destY;

	while(1) {
		scanf("%d %d %d %d", &posX, &posY, &destX, &destY);
		if (posX == 0) break;

		if (posX == destX && posY == destY) {
			printf("0\n");
			continue;
		}
		
		int distX = abs(posX - destX);
		int distY = abs(posY - destY);
		
		if (distX == distY || posX == destX || posY == destY) {
			printf("1\n");
			continue;
		} else {
			printf("2\n");
			continue;
		}
	}
}