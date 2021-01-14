#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *str;
    str = malloc(1024 * sizeof(char));
    scanf("%s", str);
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int j = 0; j < strlen(str); j++)
    {
        if (isdigit(str[j]))
        {
            count[str[j] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}
