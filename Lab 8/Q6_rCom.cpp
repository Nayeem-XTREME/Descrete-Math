#include <bits/stdc++.h>
using namespace std;

int a[100];

long long fact(long long f)
{
	long long res = 1;
	for (int i = 1; i <= f; i++) {
		res = res * i;
	}
	
	return res;
}

long long permutation (long long int x, long long int y) {
	long long int perm = 1;
	
	for (int i = x; i > y; i--) {
		perm = perm * i;
	}
	
	return perm;
}

void rCombination(int n, int r)
{
	int i, m, max, j;
	i = r;
	while (a[i] == n - r + i) {
		i--;
	}
	a[i]++;
	
	for (j = i + 1; j <= r; j++) {
		a[j] = a[i] + j - i;
	}
	
	for (i = 1; i <= r; i++) {
		printf("%d ", a[i]);
	}
	cout << endl;
}

int main()
{
	int n, r, perm, i, com;
	
	printf("Enter the value of n and r\n");
	cin >> n >> r;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	
	for (i = 1; i <= r; i++) {
		printf("%d ", a[i]);
	}
	cout << endl;
	
	
	if (r <= (n - r)) {
		com = permutation(n, n - r);
		com = com / fact(r);
	}
	
	else {
		com = permutation(n, r);
		com = com / fact(n - r);
	}
	
	com--;
	
	while (com--)
		rCombination(n, r);
	
	return 0;
}
