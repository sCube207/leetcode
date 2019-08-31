#include <stdio.h>
#include <stdlib.h>

int findMin(int* nums, int numsSize);

int main(int argc, char *argv[]) {
    int len = atoi(argv[1]);
    int arr[100];

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    printf("%d ", findMin(arr, len));
    return 0;
}

int findMin(int *nums, int numsSize) {
    int left, right;
    int mid;
    int min;

    left = 0;
    right = numsSize - 1;
    while (left < right) {
        if (nums[left] < nums[right])
            return nums[left];
       mid = left + (right - left) / 2; 
       if (nums[mid] < nums[left])
           right = mid;
       else
           left = mid + 1;
    }
    return nums[left];
}
