#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize);

int main(int argc, char **argv) {
    int arr[10] = {0, 1, 1, 1, 2, 2, 2, 2, 2, 2};
    removeDuplicates(arr, 10);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    int     i;
    int     pos;

    pos = 0;
    if (numsSize == 1 || numsSize == 0)
        return numsSize;
    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[pos]) {
            pos++;
            nums[pos] = nums[i];
        }
    }
    return pos + 1;
}
