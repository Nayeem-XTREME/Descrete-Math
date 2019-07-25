#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    printf("Enter a number:\n");
    cin >> n;

    printf("Prime factorization is:\n%d = ", n);

    int i = 2, count = 0;
    while (i <= sqrt(n)) {

        if (n % i == 0) {
            printf("%d*", i);
            n = n / i;
        }

        else {
            i++;
        }

        count++;
    }

    printf("%d\n", n);
    printf("Comparison = %d\n", count);

    return 0;
}
