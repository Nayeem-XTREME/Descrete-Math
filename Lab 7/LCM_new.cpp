#include <bits/stdc++.h>
using namespace std;

int i = 2;

int LCM(int x, int y)
{
    int i, lcm;
    for (i = 1; i <= y; i++) {
        lcm = x * i;
        if (lcm % y == 0)
            break;
    }

    return lcm;
}

int main()
{
    int a, b;
    cout << "Enter 2 positive integer to find LCM: ";
    cin >> a >> b;

    if (a > b)
        cout << "LCM is : " << LCM(a, b) << endl;
    else
        cout << "LCM is : " << LCM(b, a) << endl;

    return 0;
}
