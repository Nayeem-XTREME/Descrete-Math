#include <bits/stdc++.h>
using namespace std;

char bin (int a)
{
    int count = 0, i;
    char c[100];
    for (i = 0; a != 0; i++) {
        c[i] = (a % 2) + '0';
        a = a/2;
        count++;
    }
    c[i] = '\0';

   cout << strrev(c) << endl;

}
int main()
{
    char x[100], y = 100;
    int n1, n2;
    printf("Enter 2 numbers = ");
    cin >> n1 >> n2;
    bin(n1);
    bin(n2);
}
