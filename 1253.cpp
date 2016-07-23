#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

map<char, int> alphabetMap;
string alphabet;

void decypher(string str, int indexShift) {
	for (unsigned i = 0; i < str.length(); ++i) {
		int index = alphabetMap[str.at(i)];		
		int newIndex = index - indexShift;
		if (newIndex < 0) 
			newIndex = 26 - abs(newIndex);			
		str.at(i) = alphabet[newIndex];
	}
	cout << str << endl;
}

int main() {
	int cases;
	cin >> cases;

	for (int i = 0; i < 26; i++) {
		alphabetMap.insert(pair<char, int>('A'+i, i));
		alphabet += ('A'+i);
	}

	while (cases-- > 0) {
		string str;
		cin >> str;
		int indexShift;
		cin >> indexShift;
		
		decypher(str, indexShift);
	}
	return 0;
}