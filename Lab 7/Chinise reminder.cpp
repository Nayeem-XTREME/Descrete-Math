#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, n, t, M = 1;
    vector <int> a, m;
    int mm, aa;

    printf("Chinese Reminder Theorem\n\nx = a1 (mod) m1\nx = a2 (mod) m2\nx = a3 (mod) m3\n.\n.\n.\n.\nx = an (mod) mn\n");

    printf("\nEnter the number of equation: ");
    cin >> n;
    printf("Enter the values:\n\n");

    for (int i = 0; i < n; i++) {
        printf("a%d = ", i + 1);
        cin >> t;
        a.push_back(t);

        printf("m%d = ", i + 1);
        cin >> t;
        m.push_back(t);
        M = M * t;
        cout << endl;
    }

    for (int i = 0; i < m.size(); i++) {
        mm = M / m[i];
        aa = mm % m[i];

        //printf("x = %d, a[%d] = %d, mm = %d, aa = %d\n", x, i, a[i], mm, aa);
        x = x + a[i]*mm*aa;
    }

    cout << "\nValue of x is : " << x % M << endl;

    return 0;
}
