#include <bits/stdc++.h>
using namespace std;

bool prime[100000];

void seive ()
{
    prime[0] = 1;
    int s = sqrt(100000);
    for (int i = 1; 2*i <= 100000; i++) {
        prime[2*i] = 1;
    }

    prime[2] = 0;

    for (int i = 3; i <= s; i = i + 2) {
        for (int j = 3; i*j <= 100000; j = j + 2) {
            if (prime[i*j] != 1)
                prime[i*j] = 1;
        }
    }

}

int main()
{
    seive();

    int i, j, n;

    while (1) {

        printf("Enter an even number:\n");
        cin >> n;

        if (n % 2 == 0) {
            for (i = 2; i <= n/2; i++) {
                if (prime[i] == 0 && prime[n-i] == 0) {
                    printf("Goldbach's conjectures: %d and %d\n", i, n-i);
                }
            }
        }

        else
            printf("Invalid number!\n");
    }

    return 0;
}
