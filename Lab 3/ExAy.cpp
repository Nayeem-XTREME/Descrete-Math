#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101], b[101], i, j, k;
    int n = -50;
    for (i = 0; i < 101; i++) {
        a[i] = n++;
    }

    bool flag = 0;
    int c;
    for (i = 0; i < 101; i++) {
        c = 0;
        for (j = 0; j < 101; j++) {
            if (a[i] + a[j] == 0) {
                c++;
            }
            if (c == 101) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;

    }

    printf("For the function x + y = 0, ExAy is ");

    if (flag == 1)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
