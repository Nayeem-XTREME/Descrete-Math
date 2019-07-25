#include <bits/stdc++.h>
using namespace std;

int a[100];


long long permutation (long long int x, long long int y) {
	long long int perm = 1;
	
	for (int i = x; i > x - y; i--) {
		perm = perm * i;
	}
	
	return perm;
}

int lexicographic(int n, int r1)
{
	int p, i, j, k, r, s;
	
	j = n - 1;
	
	while (a[j] > a[j + 1]) {
		j = j - 1;
	}
	
	k = n;
	
	while (a[j] > a[k]) {
		k = k - 1;
	}
	
	int temp = a[j];
	a[j] = a[k];
	a[k] = temp;
	
	r = n;
	s = j + 1;
	
	while (r > s) {
	
		temp = a[r];
		a[r] = a[s];
		a[s] = temp;
		
		r = r - 1;
		s = s+ 1;
		
	}
	
	for (i = 1; i <= r1; i++) {
		printf("%d ", a[i]);
	}
	
	cout << endl;
}

int main()
{
	int n, r, perm;
	
	printf("Enter the value of n and r:\n");
	cin >> n >> r;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	
	for (int i = 1; i <= r; i++) {
		printf("%d ", a[i]);
	}
	
	cout << endl;
	perm = permutation(n, r);
	--perm;
	
	while (perm--)
		lexicographic(n, r);
	
	return 0;
}
