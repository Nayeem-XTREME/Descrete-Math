#include <bits/stdc++.h>
using namespace std;

int main()
{
	char A[100];
	printf("Enter your messege: ");
	gets(A);
	
	int l = strlen(A);
	
	cout << "Encrypted messege is: ";
	
	for (int i = 0; i < l; i++) {
		if (A[i] >= 'A' && A[i] <= 'Z') {
			printf("%c", 'A' + (A[i] + 3) % 26);
		}
		else if (A[i] >= 'a' && A[i] <= 'z') {
			printf("%c", 'a' + (A[i] + 3) % 26);
		}
		else
			printf("%c", A[i]);
	}
	
	return 0;
}
