#include <bits/stdc++.h>
using namespace std;
#define max 100000000
bool prime[max];

void seive ()
{

    prime[0] = 1;
    int s = sqrt(max);
    for (int i = 4; i < max; i = i + 2) {
        prime[i] = 1;
    }

    prime[2] = 0;

    for (int i = 3; i <= s; i = i + 2) {
        for (int j = i; i*j <= 100000; j = j + 2) {
            if (prime[i*j] != 1)
                prime[i*j] = 1;
        }
    }
    
//    for (int i = 0; i < 100; i++) {
//    	if (prime[i] == 0)
//    		cout << i << endl;
//	}


}

int main()
{
    seive();
    int i, j, n;
    printf("Enter a number:\n");
    cin >> n;
    if (prime[n] == 0) {
        if (prime[n + 2] == 0) {
            printf("%d and %d are twin primes.\n", n, n+2);
        }
        else
            printf("%d is prime.\n", n);
    }

    else
        printf("%d is not a prime.\n");

    return 0;
}
