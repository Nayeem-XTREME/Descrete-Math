#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, i, a[100];
	
	a[0] = 9;
	
	printf("Enter the value of n:\n");
	cin >> n;
	
	for (i = 1; i < n; i++) {
		a[i] = 8*a[i-1] + pow(10, i-1);
	}
	
	printf("%lld\n", a[i]);
	
	return 0;
}
