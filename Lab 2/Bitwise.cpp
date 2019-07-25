#include <iostream>
using namespace std;

int add (int a, int b)
{
	while (b != 0) {
		int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	
	return a;
}

int main()
{
	int n1, n2, n3, n4, count = 0;
	printf("Enter two number: ");
	cin >> n1 >> n2;
	n3 = add (n1, n2);
	printf("\nSum is %d\n", n3);
	
	n3 = ~n2;
	n4 = add(n3, 1);
	printf("\nSubtraction is %d\n", add(n1, n4));
	
	int m = 0;
	for (int i = 0; i < n2; i++) {
		m = add(m, n1);
	}
	printf("\nMultiplication is %d\n", m);
	
	m = 0;
	while (m < n1) {
		m = add(m, n2);
		count = add(count, 1);
	}
	printf("\nDivision is %d\n", count);
	
	return 0;
}
