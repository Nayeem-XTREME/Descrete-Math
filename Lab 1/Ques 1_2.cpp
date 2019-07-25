#include <bits/stdc++.h>
using namespace std;

bool AND (bool a, bool b)
{
	if (a == true && b == true)
		return true;
	else
		return false;
}

bool OR (bool a, bool b)
{
	if (a == true || b == true)
		return true;
	else
		return false;
}

bool XOR (bool a, bool b)
{
	if ((a == true || b == true) && a != b)
		return true;
	else
		return false;
}

bool then (bool a, bool b)
{
	if (a == false)
		return true;
	else if (a == true && b == true)
		return true;
	else if (a == true && b == false)
		return false;
}

bool bicon (bool a, bool b)
{
	if (a == b)
		return true;
	else
		return false;
}

int main()
{
	bool p, q, r;
	int n;
	
	while (1) {
		printf("\n1. AND\n2. OR\n3. XOR\n4. -->\n5. <-->\n6. Exit\n");
		cin >> n;
		
		if (n == 6)
			break;
			
		else {
			for (int i = 0; i <= 1; i++) {
				for (int j = 0; j <= 1; j++) {
					
					p = i, q = j;
					
					if (n == 1) {
						r = AND (p, q);
						printf("p = %d\tq = %d\tp ^ q = %d\n", p, q, r);
					}
					
					else if (n == 2) {
						r = OR (p, q);
						printf("p = %d\tq = %d\tp v q = %d\n", p, q, r);
					}
					
					else if (n == 3) {
						r = XOR (p, q);
						printf("p = %d\tq = %d\tp (+) q = %d\n", p, q, r);
					}
					
					else if (n == 4) {
						r = then (p, q);
						printf("p = %d\tq = %d\tp --> q = %d\n", p, q, r);
					}
					
					else if (n == 5) {
						r = bicon (p, q);
						printf("p = %d\tq = %d\tp <--> q = %d\n", p, q, r);
					}
				}
			}
		}
		
	}
	
	return 0;
}
