#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matA[10][10], matB[10][10], res;
    int i, j, k, m, n, o, p;

    cout << "Enter the row and column no. of Matrix A: ";
    cin >> m >> n;

    cout << "Enter the row and column no. of Matrix B: ";
    cin >> o >> p;

    if (n != o) {
        printf("Invalid row and column!\n");
    }

    printf ("Enter the elements of matrix A: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> matA[i][j];
        }
    }

    printf ("Enter the elements of matrix B: \n");
    for (i = 0; i < o; i++) {
        for (j = 0; j < p; j++) {
            cin >> matB[i][j];
        }
    }


    printf("\nMatrix multiplication is:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
                res = 0;

                for (k = 0; k < n; k++) {
                    res = res + matA[i][k]*matB[k][j];
                }

                printf("%d\t", res);
            }

            printf("\n");
        }


    return 0;
}
