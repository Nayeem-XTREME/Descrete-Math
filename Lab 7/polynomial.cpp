#include <bits/stdc++.h>
using namespace std;

bool prime[10000];

void seive ()
{
    prime[0] = 1;
    int s = sqrt(10000);
    for (int i = 1; 2*i <= 10000; i++) {
        prime[2*i] = 1;
    }

    prime[2] = 0;

    for (int i = 3; i <= s; i = i + 2) {
        for (int j = 3; i*j <= 10000; j = j + 2) {
            if (prime[i*j] != 1)
                prime[i*j] = 1;
        }
    }

}

int main()
{
    seive();
    int f, n;

    for (int i = 1; i <= 1000; i++) {
        if (prime[i] == 0)
        printf("%d\n", i);
    }

    printf("\nEnter a number: \n");
    while (cin >> n) {
        f = n*n - n + 41;
        printf("The number is %d\n", f);
        if (prime[f] == 0)
            printf("%d is also a prime number.\n", f);

        printf("\nEnter a number: \n");
    }


    return 0;
}
