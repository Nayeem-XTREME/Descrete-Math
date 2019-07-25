#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101], b[101], i, j, k;
    int n = -50;
    for (i = 0; i < 101; i++) {
        a[i] = n++;
    }

    int c = 0;
    for (i = 0; i < 101; i++) {
        for (j = 0; j < 101; j++) {
            if (a[i] + a[j] == 0) {
                c++;
            }
        }
    }

    printf("For the function x + y = 0, AxEy is ");

    if (c == 101)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
