#include <stdio.h>

int removeElement(int *nums, int numsSize, int val);

int main() { 
    int arr[4] = {1, 2, 1};
    removeElement(arr, 3, 1);
    for (int i = 0; i < 1; i++)
        printf("%d\n", arr[i]);
}

int removeElement(int* nums, int numsSize, int val){
    int i;
    int pos;
    
    pos = 0;
    if (numsSize == 0)
        return numsSize;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    return pos;
}
