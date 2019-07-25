#include <bits/stdc++.h>
using namespace std;

vector <int> a;

int bin (int n)
{
    while (n/2 != 0) {
        a.push_back(n % 2);
        n = n/2;
    }
    if (n % 2 == 1)
        a.push_back(1);

    for (int i = 0; i < a.size(); i++) {
        printf("%d\n", a[i]);
    }
}

int mod(int b, int n, int m)
{
    int x, power, i;

    bin(n);

    x  = 1;
    power = b % m;

    for (i = 0; i < a.size(); i++) {
        if (a[i] == 1)
            x = (x * power) % m;

        power = (power*power) % m;
    }

    return x;
}

int gcd(int a, int b)
{
    int temp;
    temp = a;

    if (b % a == 0)
        return a;
    else {
        a = b%a;
        b = temp;
        gcd(a, b);
    }

}

int main()
{
    int n, b, i;
    printf("Enter the value of b (positive integer) : ");
    cin >> b;
    printf("Enter the value of n (composite positive integer) : ");
    cin >> n;

    int res = mod(b, n-1, n);
    printf("res = %d\n", res);
    int g = gcd(b, n);
    printf("gcd = %d\n", g);

    if (res == 1 && g == 1) {
        printf("%d is a Carmicheal number of %d\n", n, b);
    }
    else {
        printf("%d is not a Carmicheal number of %d\n", n, b);
    }

    return 0;
}
