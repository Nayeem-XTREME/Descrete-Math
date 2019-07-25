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

int lexicographic(int n)
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
	
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	
	cout << endl;
}

int main()
{
	int n, perm;
	
	printf("Enter the no. of elements of set a:\n");
	cin >> n;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
		printf ("%d ", i);
	}
	
	cout << endl;
	perm = fact(n);
	--perm;
	
	while (perm--)
		lexicographic(n);
	
	return 0;
}
