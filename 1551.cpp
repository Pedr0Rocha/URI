#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

void countLetters(string s) {
	map<char, int> alphabetMap;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ' && s[i] != ',')
			alphabetMap[s[i]] = 1;
	}

	if (alphabetMap.size() == 26)
		cout << "frase completa" << endl;
	else if (alphabetMap.size() >= 13)
		cout << "frase quase completa" << endl;
	else
		cout << "frase mal elaborada" << endl;
}

int main() {
	int cases;
	cin >> cases;
	cin.ignore();
	
	while (cases--) {
		string sentence;
		getline(cin, sentence);
		countLetters(sentence);
	}

	return 0;
}