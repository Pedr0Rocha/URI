#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r1, x1, y1,
		r2, x2, y2;
	while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {

		if (x1 == x2 && y1 == y2)
			if (r1 > r2) { 
				cout << "RICO" << endl;
				continue;
			} else {
				cout << "MORTO" << endl;
				continue;
			}

		// if (x1 + r1 >= x2 + r2 && y1 + r1 >= y2 + r2) {
		// 	cout << "RICO" << endl;
		// 	continue;
		// } else {
		// 	cout << "MORTO" << endl;
		// 	continue;	
		// }

		float distance = sqrt(pow((double)abs(x2 - x1), 2.0) + pow((double)abs(y2 - y1), 2.0));
		if (r1 >= distance + r2)
			cout << "RICO" << endl;
		else
			cout << "MORTO" << endl;
	}
	return 0;
}