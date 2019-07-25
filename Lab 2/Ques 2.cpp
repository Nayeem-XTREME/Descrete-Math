#include <bits/stdc++.h>
using namespace std;

int add (int x, int y)
{
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1; // Left shift of carry
    }

    return x;
}

int main()
{
    int n1, n2, tc, sum;
    cout << "Enter 2 number = ";
    cin >> n1 >> n2;
    //cout << ~n2 << endl;

    tc = add(~n2, 1);
    sum = add(n1, tc);
    cout << "Sum is = " << sum << endl;
    return 0;
}
