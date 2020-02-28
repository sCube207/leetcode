#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main() {
    int *ret;
    int arr[4];
    int size;

    for (int i = 0; i < atoi(argv[1]); i++) {
        scanf("%d", &arr[i]);
    }
    ret = twoSum(arr, atoi(argv[1]), atoi(argv[2]), &size);
    for (int i = 0; i < size; i++) {
        printf("%d", ret[i]);
    }
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    int *arr;

    arr = (int *)malloc(sizeof(int) * 2);
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i +1; j < numsSize; j++) {
//if nums[j] + nums[i] == target, but we avoid overflow of int(2000000000 + 2000000000
            if (nums[j] == target - nums[i]) 
            {
                arr[0] = i;
                arr[1] = j;            
                *returnSize = 2;
                return arr;
            }
        }
    }
//if there are no answer
    free(arr);
    return (0);
}
