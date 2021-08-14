#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP_SIZE 20
int main(void)
{
    float fahr, celsius;

    printf("%5s %7s\n", "fahr", "celsius");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP_SIZE) {
        celsius = 5.0 * (fahr - 32) / 9.0;
        printf("%5.0f %7.1f\n", fahr, celsius);
    }
    return 0;
}
