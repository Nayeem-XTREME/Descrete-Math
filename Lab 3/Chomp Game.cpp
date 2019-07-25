#include <bits/stdc++.h>
using namespace std;
char grid[10][20];
int flag[10][20];
int n1, n2;

char turnA();
char turnB();

char griddraw()
{
	
	grid[0][0] = '*', flag[0][0] = 0;
	for (int i = 1; i < 20; i++) {
		grid[0][i] = '.';
		flag[0][i] = 0;
	}
		
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			grid[i][j] = '.';
			flag[i][j] = 0;
		}
	}
}

char turnA ()
{
	printf("\nTurn of A\nSelect one grid (Enter Row and Column) : ");
	cin >> n1 >> n2;
	for (int i = n1-1; i < 10; i++) {
		for (int j = n2 - 1; j < 20; j++) {
			if (flag[i][j] == 0) {
				grid[i][j] = 'A';
				flag[i][j] = 1;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
	
	if (flag[0][0] == 1)
		return grid[0][0];
		
	//count++;
	turnB();
}

char turnB ()
{
	printf("\nTurn of B\nSelect one grid (Enter Row and Column) : ");
	cin >> n1 >> n2;
	for (int i = n1-1; i < 10; i++) {
		for (int j = n2 - 1; j < 20; j++) {
			if (flag[i][j] == 0) {
				grid[i][j] = 'B';
				flag[i][j] = 1;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
	
	if (flag[0][0] == 1)
		return grid[0][0];
		
	//count++;
	turnA();
}

int main()
{
	char n, res;
	griddraw();
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
	
	printf("\nWho wants to turn first, A or B?\n");
	cin >> n;
	if (n == 'A') {
		//count = 1;
		res = turnA();
	}
	else if (n == 'B') {
		//count = 1;
		res = turnB();
	}
	
	cout << "\nLoser is = " << res << endl;
}
