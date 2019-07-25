#include <bits/stdc++.h>
using namespace std;

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

int main()
{
	long long int n, r, i, com;
	cout << "Enter the value of n and r to find nCr:" << endl;
	cin >> n >> r;
	
	if (r <= (n - r)) {
		com = permutation(n, n - r);
		com = com / fact(r);
		
		printf("%lldC%lld = %lld\n", n, r, com);
	}
	
	else {
		com = permutation(n, r);
		com = com / fact(n - r);
		
		printf("%lldC%lld = %lld\n", n, r, com);
	}
	
	
	return 0;
}
