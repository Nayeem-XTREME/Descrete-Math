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
    int n1, n2, res = 0, count = 0;

    while (1) {
        printf("\n1. Divide\n2. Exit\n");
        int n;
        cin >> n;
        if (n == 2)
            break;
        else if (n == 1) {
            cout << "Enter 2 no. to divide = ";
            cin >> n1 >> n2;
            while (res <= n1) {
                res = add(res, n2);
                count++;
            }
            cout << "Result = " << count - 1 << endl;
        }
    }

    return 0;
}
