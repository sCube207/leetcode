#include <stdio.h>
#include <stdlib.h>

int pivot(int *nums, int numsSize);

int main() {
    int size = 0;
    int *arr = NULL;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int *) malloc(sizeof(int) * size);
    if (arr == NULL)
        exit(1);

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Pivot is %d\n", pivot(arr, size));
    return 0;
}

/*
    pivot: function looking for posision where left and right sum of elements are
    equal and return this pos, if it's imposible return -1.
*/

int pivot(int *v, int size) {
    int left_sum;
    int right_sum;

    left_sum = right_sum = 0;
    for (int i = 0; i < size; i++) {
        right_sum += v[i];
    }

    for (int i = 0; i < size; i++) {
        if (left_sum == right_sum - left_sum - v[i])
            return i;
        left_sum += v[i];
    }
    return -1;
}

