#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, i;
    printf("Enter the value of b (positive integer) : ");
    cin >> b;
    printf("Enter the value of n (composite positive integer) : ");
    cin >> n;

    int res = pow(b, n-1);

    if (res % n == 1) {
        printf("\n%d is a pseudo prime of %d\n", n, b);
    }
    else {
        printf("\n%d is not a pseudo prime of %d\n", n, b);
    }


    return 0;
}
