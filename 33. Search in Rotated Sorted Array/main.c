#include <stdio.h>
#include <stdlib.h>

int     search(int *nums, int numsSize, int target);

int     main(int argc, char **argv) {
    int arr[100];
    int len = atoi(argv[1]);
    int find = atoi(argv[2]);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", search(arr, len, find));
    return 0;
}

int search(int *nums, int numsSize, int target) {
    int left, right, mid;

    left = 0;
    right = numsSize - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
         if (nums[mid] < nums[right]) {
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        } else {
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
    }
    return -1;
}
