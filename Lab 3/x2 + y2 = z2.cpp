#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s, i, j, flag = 0;
	printf("x2 + y2 = z2\n");
	printf("Enter the value of z: ");
	cin >> n;
	printf("\nPossible values of x and y can be: \n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i*i + j*j == n*n) {
				printf("%d %d\n", i, j);
				flag = 1;
			}		
		}
	}
	
	if (flag == 0)
		printf("\nThere are no values of x and y for the given value of z\n");
	
	return 0;
}
