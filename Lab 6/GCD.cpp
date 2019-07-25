#include <bits/stdc++.h>
using namespace std;

int GCD (int a, int b)
{
	int temp;
	
	if (b % a == 0) {
		return a;
	}
	
	else {
		temp = a;
		a = b % a;
		b = temp;
		GCD(a, b);
	}		
}

int res = 1;

int LCM (int x, int y)
{
	int i, count = 0;
	for (i = 2; i <= x; i++) {
		if (x % i == 0 && y % i == 0) {
			res = res * i;
			x = x / i, y = y / i;
			count++;
			break;
		}
	}
	
	if (count == 0) {
		res = res * x * y;
		return res;
	}
	
	else {
		LCM (x, y);
	}
}

int main()
{
	int a, b;
	
	cout << "Enter 2 numbers to find GCD and LCM: ";
	cin >> a >> b;
	cout << "GCD is = " << GCD(a, b) << endl;
	
	if (a < b) {
		cout << "LCM is = " << LCM(a, b) << endl;
    }
    else {
    	cout << "LCM is = " << LCM(b, a) << endl;
	}
	
}
