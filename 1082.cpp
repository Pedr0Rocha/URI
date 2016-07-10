#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define CHARCONVERTION 97
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFITIY 9999

typedef vector<int> vi;

vector<vi> adjList;
vector<int> colors;
vector<int> components;

int cnt = 0,v,a,x,y;

void dfs(int current) {
	colors[current] = 1;
	cnt += 2;
	components.push_back(current);
	for(int i = 0; i < (int) adjList[current].size(); i++) {
		int v = adjList[current][i];
		if(colors[v] == 0) {
			dfs(v);
		}
	}
	colors[current] = 2;
}


int main() {	
	int casesIndex = 1;
	int cases;
	cin >> cases;
	for (int o = 0; o < cases; o++) {
		cnt = 0;
		cin >> v >> a;
		int numComponents = 0;
		adjList.assign(v,vector<int>());
		colors.assign(v,0);
		for(int i = 0; i < a; i++) {
			char a,b;
			cin >> a >> b;
			int x = ((int)a) - CHARCONVERTION,
				y = ((int)b) - CHARCONVERTION;
			
			adjList[x].push_back(y);
			adjList[y].push_back(x);
		}
		for(int i = 0; i < v; i++)
			sort(adjList[i].begin(), adjList[i].end());

		cout << "Case #" << casesIndex++ << ":"<< endl ;
		for(int i = 0; i < v; i++) {
			if(!colors[i]) {
				numComponents++;
				dfs(i);
				sort(components.begin(),components.end());
				for (int u = 0; u < (int) components.size(); u++){
					cout <<  (char)(components[u]+CHARCONVERTION) << ",";
				}
				components.clear();
				cout << endl;
			}
			
		}
		cout << numComponents << " connected components" << endl << endl;
	}
}