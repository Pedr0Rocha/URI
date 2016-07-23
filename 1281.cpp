#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main() {
	int cases;
	cin >> cases;

	while (cases-- > 0) {
		int nofItems;
		cin >> nofItems;

		map<string, double> allProducts;
		for (int i = 0; i < nofItems; i++) {
			string productName;
			cin >> productName;

			double productPrice;
			cin >> productPrice;
			allProducts.insert(pair<string, double>(productName, productPrice));
		}

		int nofItemsToBuy;
		cin >> nofItemsToBuy;
		double totalMoney = 0;
		for (int i = 0; i < nofItemsToBuy; i++) {
			string productName;
			cin >> productName;

			int productQuantity;
			cin >> productQuantity;

			totalMoney += allProducts[productName] * productQuantity;
		} 
		printf("R$ %.2f\n", totalMoney);
	}	
	return 0;
}