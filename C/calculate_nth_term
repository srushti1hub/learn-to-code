#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    int p = a, q = b, r = c, result = 0;
    for (int i = 4; i <= n; i++)
    {
        result += p + q + r;
        p = q;
        q = r;
        p = result;
    }
    return result;
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
