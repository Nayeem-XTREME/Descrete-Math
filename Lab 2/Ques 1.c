#include <bits/stdc++.h>
using namespace std;

int AND (int a, int b)
{
    if (a == true && b == true)
        return true;
    else
        return false;
}

int XOR (int a, int b)
{
    if ((a == true && b == false) || (a == false && b == true))
        return true;
    else
        return false;
}

int bitwiseadd (int x, int y)
{
    while (y != 0) {
        int carry = AND(x, y);
        x = XOR(x, y);
        y = carry << 1;
    }

    return x;
}

int main()
{
    int n1, n2;
    printf("Enter 2 no. = ");
    cin >> n1 >> n2;
    cout << "Sum is " << bitwiseadd(n1, n2) << endl;

    return 0;
}
