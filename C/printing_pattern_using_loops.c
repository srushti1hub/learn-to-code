#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int start = 0, end = 2 * n - 2, len = n;
    int pattern[2 * n - 1][2 * n - 1];
    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    pattern[i][j] = n;
                }
            }
        }
        n--;
        start++;
        end--;
    }
    for (int i = 0; i < 2 * len - 1; i++)
    {
        for (int j = 0; j < 2 * len - 1; j++)
        {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }
    return 0;
}
