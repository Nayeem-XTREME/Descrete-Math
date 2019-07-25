#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[50], n, i, j, temp, src, first, last, middle;
    printf("Enter the no. of data\n");
    cin >> n;

    printf("Enter the data: \n");
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 1; i < n; i++) {
        for (j = 1; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted data:\n");
    for (i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    printf("Enter a data to search: ");
    cin >> src;

    first = 1;
    last = n;

    while (first < last) {
        middle = (first + last) / 2;
        if (a[middle] = src) {
            printf ("Data found in location %d\n", middle + 1);
            break;
        }

        else if (src < a[middle]) {
            last = middle - 1;
        }
        else if (src > a[middle]) {
            first = middle + 1;
        }
    }


}
