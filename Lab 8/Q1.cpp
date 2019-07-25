#include <bits/stdc++.h>
using namespace std;

long long permutation (long long int x, long long int y) {
	long long int perm = 1;
	
	for (int i = x; i > x - y; i--) {
		perm = perm * i;
	}
	
	return perm;
}

int main()
{
	long long int n, r, i, perm;
	cout << "Enter the value of n and r to find nPr:" << endl;
	cin >> n >> r;
	
	perm = permutation(n, r);
	
	printf("%lldP%lld = %lld\n", n, r, perm);
	
	return 0;
}
