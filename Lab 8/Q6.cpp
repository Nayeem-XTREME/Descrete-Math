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

void rPermutation(int n, int r)
{
	int i, j, k, m, p, q;
	int f = fact(n);
	for (i = 2; i <= f - 1; i++) {
		m = n - 1;
		while (a[m] > a[m + 1]) {
			m = m - 1;
		}
		
		k = n;
		while (a[m] > a[k]) {
			k = k - 1;
		}
		
		int temp = a[m];
		a[m] = a[k];
		a[k] = temp;
		
		p = m + 1;
		q = n;
		
		while (p < q) {
			
			temp = a[p];
			a[p] = a[q];
			a[q] = temp;
			
			p = p + 1;
			q = q - 1;
			
		}
		
		for (i = 1; i <= r; i++) {
			printf("%d ", a[i]);
		}
		
		cout << endl;
	}
}

int main()
{
	int n, r, perm;
	
	printf("Enter the value of n and r\n");
	cin >> n >> r;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	
	for (int i = 1; i <= r; i++) {
		printf("%d ", a[i]);
	}
	
	rPermutation(n, r);
	
	return 0;
}
