#include <stdio.h>
#include <stdlib.h>

int dominantIndex(int *nums, int numsSize);

int main() {
    int *ar;
    int size;

    size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    ar = (int *) malloc(size * sizeof(int));
    if (ar == NULL)
        exit(1);

    for (int i = 0; i < size; i++)
        scanf("%d", &ar[i]);

    printf("Index - %d\n", dominantIndex(ar, size));
}

int dominantIndex(int *n, int s) {
    int max;

    max = 0;
    for (int i = 0; i < s; i++)
        if (n[i] > n[max])
            max = i;

    for (int i = 0; i < s; i++) {
        if (i != max && n[i] * 2 > n[max])
            return -1;
    }
    return max;
}
