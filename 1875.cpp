#include <iostream>
using namespace std;

int goalValue(char team1, char team2) {
	switch(team1) {
		case 'G':
			if (team2 == 'B') return 2;
			else return 1;
		case 'B':
			if (team2 == 'R') return 2;
			else return 1;
		case 'R':
			if (team2 == 'G') return 2;
			else return 1;
	}
}

int main() {
	int cases;

	cin >> cases;
	while (cases-- > 0) {
		int goalsCount; 
		int gScore = 0;
		int bScore = 0;
		int rScore = 0;
		cin >> goalsCount;
		for (int i = 0; i < goalsCount; i++) {
			char team1, team2;
			cin >> team1 >> team2;
			if (team1 == 'G') 
				gScore += goalValue(team1, team2);
			else if (team1 == 'R') 
				rScore += goalValue(team1, team2);
			else 
				bScore += goalValue(team1, team2);
		}

		if (gScore == rScore && rScore == bScore)
			cout << "trempate" << endl;
		else if (gScore > rScore && gScore > bScore)
			cout << "green" << endl;
		else if (rScore > gScore && rScore > bScore)
			cout << "red" << endl;
		else if (bScore > gScore && bScore > rScore)
			cout << "blue" << endl;
		else
			cout << "empate" << endl; 
	}
	return 0;
}