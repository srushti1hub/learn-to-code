#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    int *arr[n];
    for (int a = 0; a < n; a++)
    {
        int k;
        cin >> k;
        arr[a] = (int *)malloc(k * sizeof(int));
        for (int b = 0; b < k; b++)
        {
            cin >> arr[a][b];
        }
    }
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    return 0;
}
