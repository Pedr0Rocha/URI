#include <iostream>
#include <string>
#include <map>
#include <algorithm>    

using namespace std;

int main() {
	string name;
	map<string, string> names;
	while (getline(cin, name)) {
		string lowercaseName;
  		lowercaseName.resize(name.size());
		std::transform(name.begin(), name.end(), lowercaseName.begin(), ::tolower);
		names.insert(pair<string, string>(lowercaseName, name));
	}
	auto itLast = names.rbegin();
	cout << itLast->second << endl;
	return 0;
}