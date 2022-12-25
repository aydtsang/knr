#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int l, int h) 
{
    int pivot = arr[h];
    int i = l-1; //stores value \gt pivot until we run into j \lt pivot
    for (int j = l; j < h; ++j) 
    {
        if (arr[j] <= pivot) 
        {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

int *read_arr(int *len) 
{
    int num;
    int *arr = NULL;
    if (scanf("%d ", &num) != 1) return arr;
    int capacity = 1;
    arr = malloc(sizeof(int)*capacity);
    arr[(*len)++] = num;
    while (scanf("%d", &num) == 1) {
        if (*len == capacity) {
            capacity *= 2;
            arr = realloc(arr, sizeof(int)*capacity);
        }
        arr[(*len)++] = num;
    }
    arr = realloc(arr, sizeof(int)*(*len));
    return arr;
}

void quicksort_recursive(int *arr, int l, int h) 
{
    if (l < h) 
    {
        int p = partition(arr, l, h);
        quicksort_recursive(arr, l, p-1);
        quicksort_recursive(arr, p+1, h);
    }
}