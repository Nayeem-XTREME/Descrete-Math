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
	long long n, r, res, com;
	printf("Enter the value of n and r to find nPr and nCr with repeatation:\n");
	cin >> n >> r;
	
	res = pow(n, r);
	printf("%lldP%lld with repeatation = %lld\n", n, r, res);
	
	
	if (r <= (n - 1)) {
		com = permutation(n + r - 1, n - 1);
		com = com / fact(r);
		
		printf("%lldC%lld with repeatation = %lld\n", n, r, com);
	}
	
	else {
		com = permutation(n + r - 1, r);
		com = com / fact(n - 1);
		
		printf("%lldC%lld with repeatation = %lld\n", n, r, com);
	}
	
	
	
	return 0;
}
