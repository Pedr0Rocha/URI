#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int cases;
	cin >> cases;

	while(cases-- > 0) {
		int boardCells;
		unsigned long long grainQuantity = 1;
		unsigned long long totalKg = 0;
		cin >> boardCells;

		if (boardCells == 64) {
			grainQuantity = pow(2, boardCells-1);
			totalKg = grainQuantity / 6000;
		} else {
			grainQuantity = pow(2, boardCells);
			totalKg = grainQuantity / 12000;
		}
		cout << totalKg << " kg" << endl;

	}

	return 0;
}