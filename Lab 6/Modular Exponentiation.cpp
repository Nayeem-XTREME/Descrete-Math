#include <bits/stdc++.h>
using namespace std;

vector <int> bin;

int binary (int x) {
	
	while (x > 1) {
		bin.push_back(x % 2);
		x = x / 2;
	}
	
	bin.push_back(x);
}

int main()
{
	int b, n, m, x, power;
	cout << "(b ^ n) mod m\nEnter the value of b, n and m" << endl;
	cin >> b >> n >> m;
	binary(n);
	
	x = 1;
	power = b % m;
	
	for (int i = 0; i < bin.size(); i++) {
		if (bin[i] == 1) {
			x = (x * power) % m;
		}
		
		power = (power * power) % m;
	}
	
	printf("Result = (%d ^ %d) mod %d = %d\n", b, n, m, x);
	
	return 0;
}
