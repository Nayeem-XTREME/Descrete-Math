#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector <int> p, q;
int count = 0, num, size;

int power (int in)
{
        for (int i = in; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                printf("(");
                for (int k = 0; k < q.size(); k++)
                    printf("%d ", q[k]);


                printf("%d %d)\t", p[i], p[j]);
            }
        }

        if (in < size) {
            q.push_back(p[in]);
            power(in + 1);
        }
        else
            printf("and null\n");
}

int main()
{
    int n, m, in;
    printf("Enter the no. of elements of set P:\n");
    cin >> n;
    //num = pow(2, n);
    size = n;
    in = 0;
    printf("Enter the elements of set P:\n");
    for (int i = 0; i < size; i++) {
        cin >> m;
        p.push_back(m);
    }

    printf("Power set if P is : \n");
    for (int i = 0; i < size; i++) {
        printf("(%d)\t", p[i]);
    }

    power(in);

    return 0;
}
