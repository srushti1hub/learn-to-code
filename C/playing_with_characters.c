#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s1[25], s2[100];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ scanf("%c", &ch);
    scanf("%s", s1);
    scanf("\n");
    scanf("%[^\n]%*c", s2);
    printf("%c\n%s\n%s", ch, s1, s2);
    return 0;
}
