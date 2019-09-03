#include <stdio.h>
#include <stdlib.h>

int searchPos(int* nums, int numsSize, int target, short int isLeft) {
    int left, right;    
    int mid;

    left = 0;
    right = numsSize;
    while (left < right) {
        mid = left + (right - left) / 2;
        // if we haven't found left pos
        if (nums[mid] > target || (isLeft && nums[mid] == target))
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int left, right;
    int mid;
    int* retArr;

    //create default return
    *returnSize = 2;
    retArr = (int*)malloc(sizeof(int) * 2);
    retArr[0] = -1;
    retArr[1] = -1;
    
    left = searchPos(nums, numsSize, target, 1);
    right = numsSize - 1;
    //if we can't find target or we numsSize = 0
    if (left == numsSize || nums[left] != target)
        return retArr;

    retArr[0] = left;
    retArr[1] = searchPos(nums, numsSize, target, 0) - 1;
    return retArr;
}

int main(int argc, char *argv[]) {
    int arr[100];
    int *ans;
    int len, target;
    int ret_len = 0;

    len = atoi(argv[1]);
    target = atoi(argv[2]);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    ans = searchRange(arr, len, target, &ret_len);
    printf("[%d, %d]\n", ans[0], ans[1]);
    return 0;
}
