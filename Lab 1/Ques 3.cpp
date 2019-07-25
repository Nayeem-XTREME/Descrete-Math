#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, i;
	
	while (1) {
		int p[100] = {0}, flag = 0;
		printf("\n1. Proposition:\n2. Exit\n");
		cin >> n;
		if (n == 1) {
			printf("Enter no. of variables = ");
			cin >> n;
			printf("Enter variables = ");
			for (i = 0; i < n; i++) {
				cin >> p[i];		
			}
			
			printf("Result of AND :\n");
			for (i = 0; i < n; i++) {
				if (p[i] == 0)
					flag++;	
			}
			if (flag == 0)
				printf("Result = 1\n");
			else
				printf("Result = 0\n");
				
			
			printf("Result of OR :\n");
			for (i = 0; i < n; i++) {
				if (p[i] == 1)
					flag++;		
			}
			if (flag == 0)
				printf("Result = 0\n");
			else
				printf("Result = 1\n");
		}
	}
	
	return 0;
}
