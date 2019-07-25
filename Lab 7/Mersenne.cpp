#include <bits/stdc++.h>
using namespace std;

bool prime[10000000];

void seive ()
{
    prime[0] = 1;
    int s = sqrt(10000000);
    for (int i = 1; 2*i <= 10000000; i++) {
        prime[2*i] = 1;
    }

    prime[2] = 0;

    for (int i = 3; i <= s; i = i + 2) {
        for (int j = i; i*j <= 10000000; j = j + 2) {
            if (prime[i*j] != 1)
                prime[i*j] = 1;
        }
    }
}

int main()
{
    seive();
    int n;

    printf("Enter a positive integer:\n");
    while(cin >> n) {
        if (prime[n] == 0) {
            int p = pow(2, n) - 1;
            if (prime[p] == 0) {
                printf("%d is a Mersenne prime of %d\n", p, n);
            }

            else
                printf("%d is not a Mersenne prime of %d\n", p, n);
        }

        else
            printf("%d is not a prime\n", n);

        printf("\nEnter a positive integer:\n");
    }



    return 0;
}
