#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main() {
	int totalNumbers;
	map<string, int> nums;
	int nIndex = 0;

	while (cin >> totalNumbers) {
		nIndex = totalNumbers;
		while (nIndex-- > 0) {
			string num;
			cin >> num;
			nums.insert(pair<string, int>(num, nIndex));
		}
		for (auto y : nums)
			cout << y.first << endl;
		nums.clear();
	}
	return 0;
}