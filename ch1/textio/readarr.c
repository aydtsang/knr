#include <stdio.h>

int main(void)
{
    int c, nwhite, nother;
    int ndigit[10];

    for (int i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }
    
    printf("\ndigits =");
    for (int i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf("\nwhite space = %d\nother = %d\n", nwhite, nother);
    return 0;
}
