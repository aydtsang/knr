#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    ;
    while (scanf("%d", &x) != EOF) {
        printf("%d^%d = %f\n", 2, x, pow(2, x));
    }
}