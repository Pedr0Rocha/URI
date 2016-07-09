#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFITIY 9999

typedef vector<int> vi;

vector<vi> Adjlist;
vector<int> color;
int currentTime = 0;
int numVertices, numEdges;

void dfsVisit(int vertex) {
	currentTime++;
	color[vertex] = GRAY;
	for (int i = 0; i < Adjlist[vertex].size(); i++) {
		int v = Adjlist[vertex][i];

		dfsVisit(v);
	}
	color[vertex] = BLACK;
}

void dfs(int vertex) {
	if (color[vertex] == WHITE && Adjlist[vertex].size() > 0)
		dfsVisit(vertex);

	for (int i = 1; i < numVertices; i++) {
		currentTime = -1; 
		if (color[i] == WHITE && Adjlist[i].size() > 0) {
			if (Adjlist[0].size() > 0)
				cout << endl;
			dfsVisit(i);
		}
	}
	cout << endl;
}

int main() {
	int cases;
	int caseIndex = 0;
	cin >> cases;

	while (cases-- > 0) {
		caseIndex++;
		cout << "Case #" << caseIndex << ":" << endl;
		
		cin >> numVertices >> numEdges;
		
		Adjlist.assign(numVertices, vector<int>());
		color.assign(numVertices, 0);

		for (int i = 0; i < numEdges; i++) {
			char v, u;
			cin >> v >> u;
			int x = (int)a - 97;
			int y = (int)a - 97;
			Adjlist[v].push_back(u);
			Adjlist[u].push_back(v);
		}
		//dfs(0);
	}
	return 0;
}