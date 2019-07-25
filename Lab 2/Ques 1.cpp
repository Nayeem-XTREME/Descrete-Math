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
    int n1, n2;
    printf("Enter 2 no. = ");
    cin >> n1 >> n2;
    cout << "Sum is " << add(n1, n2) << endl;

    return 0;
}
