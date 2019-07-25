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
    int p, q, n, e, part[20];
    char c[100];
    vector <int> a;
    printf("Enter your message to encrypt:\n");
    cin >> c;

    int l = strlen(c);

    for (int i = 0; i < l; i++) {
        a.push_back(c[i]);
    }

    //for (int i = 0; i < a.size(); i++) {
    //    cout << a[i] << endl;
    //}

    int j = 0, i = 0;
    while (j < a.size()) {
        part[i] = a[j]*100 + a[j+1];
        j += 2;
        i++;
    }

    return 0;
}
