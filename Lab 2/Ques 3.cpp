#include <bits/stdc++.h>
using namespace std;

int add (int x, int y)
{
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }

    return x;
}

int main()
{
    int n1, n2, res = 0;
    printf("Enter 2 no. to multiply = ");
    cin >> n1 >> n2;

    for (int i = 0; i < n2 ; i++) {
        res = add(res, n1);
    }
    cout << res << endl;

    return 0;
}


