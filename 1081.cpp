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
int depth = 0;

void print(int v, int u, int depth, int printChamada) {
	string spaces = ""; 
	while (depth--)
		spaces += "  ";
	
	if (printChamada)
		cout << spaces << v << "-" << u << " pathR(G," << u << ")" << endl;
	else 
		cout << spaces << v << "-" << u << endl;
}

void dfsVisit(int vertex) {
	currentTime++;
	color[vertex] = GRAY;
	depth++;
	for (int i = 0; i < Adjlist[vertex].size(); i++) {
		int v = Adjlist[vertex][i];

		if (color[v] == WHITE) {
			print(vertex ,v, depth, 1);
			dfsVisit(v);
		} else 
			print(vertex, v, depth, 0);
	}
	depth--;
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
		currentTime = -1;
		caseIndex++;
		cout << "Caso " << caseIndex << ":" << endl;
		
		cin >> numVertices >> numEdges;
		
		Adjlist.assign(numVertices, vector<int>());
		color.assign(numVertices, 0);
		
		for (int i = 0; i < numEdges; i++) {
			int v, u;
			cin >> v >> u;		
			Adjlist[v].push_back(u);
		}
		for (int i = 0; i < numVertices; i++) {
			sort(Adjlist[i].begin(), Adjlist[i].end());
			Adjlist[i].erase(unique(Adjlist[i].begin(), Adjlist[i].end()), Adjlist[i].end());
		}
		dfs(0);
	}
	return 0;
}