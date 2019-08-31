#include <stdio.h>
#include <stdlib.h>

int findPeakElement(int* nums, int numsSize);

int main(int argc, char *argv[]) {
    int arr[100];
    int len = atoi(argv[1]);

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    printf("%d ", findPeakElement(arr,len));
    return 0;
}

int findPeakElement(int *nums, int numsSize) {
    int left, right;
    int mid;

    left = 0;
    right = numsSize - 1;
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return right;
}
