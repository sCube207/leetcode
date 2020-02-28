#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* d, int dSize, int* retSize);

int main() {
    int *ans;
    int size = 0;
    int retSize = 0;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *) malloc( sizeof(int) * size);
    if (arr == NULL)
        exit(1);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    ans = plusOne(arr, size, &retSize);
    for (int i = 0; i < retSize; i++)
        printf("%d", ans[i]);
    printf("\n");
    return 0;
}

int* plusOne(int* d, int dSize, int* retSize) {
    if (d == NULL)
        return NULL;

    int n = dSize - 1;

    while (n >= 0) {
        if (d[n] < 9) {
            d[n]++;
            *retSize = dSize;
            return d;
        } else {
            d[n] = 0;
            n--;
        }
    }

    int *tmp = (int *) malloc( sizeof(int) * (dSize + 1));
    tmp[0] = 1;
    for (int i = 1; i < dSize + 1; i++) {
        tmp[i] = d[i - 1];
    }
    *retSize = dSize + 1;
    free(d);
    d = tmp;
    return d;
}






