#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        int e = (c != EOF);
        printf("%d\n", e);
    }
    printf("%d\n", c != EOF);
    return 0;
}
