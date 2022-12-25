#include "quicksort.h"

int main (void) 
{
    int len = 0;
    int *arr = read_arr(&len);
    quicksort_recursive(arr, 0, len - 1);
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
