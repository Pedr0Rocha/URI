#include <iostream>
#include <vector>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2


typedef vector<int> vi;

vector<vi> Adjlist;
vector<int> color;
int movs = 0;

void dfs(int vertex) {
	color[vertex] = GRAY;
	movs += 2;
	for (int i = 0; i < Adjlist[vertex].size(); i++) {
		int v = Adjlist[vertex][i];
		if (color[v] == WHITE) 
			dfs(v);
	}
}

int main() {
	int cases;
	cin >> cases;


	while (cases-- > 0) {
		movs = -2;
		int mainIndex, numVertices, numEdges;
		
		cin >> mainIndex >> numVertices >> numEdges;
		
		Adjlist.assign(numVertices, vector<int>());
		color.assign(numVertices, 0);
		
		for (int i = 0; i < numEdges; i++) {
			int v, u;
			cin >> v >> u;
			Adjlist[v].push_back(u);
			Adjlist[u].push_back(v);
		}

		dfs(mainIndex);
		cout << movs << endl;
	}
	return 0;
}