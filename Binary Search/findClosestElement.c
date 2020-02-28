#include <stdio.h>
#include <stdlib.h>

int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize){
    int left, right;
    int mid;
    int* ret_arr;
    int i;
  
    if (k >= arrSize) {
        *returnSize = k;
        return arr;
    }
    left = 0;
    ret_arr = (int*)malloc(sizeof(int) * k);
    right = arrSize - 1;
    while (left + 1 < right) {
        mid = left + (right - left) / 2;
        if (arr[mid] < x)
            left =  mid;
        else if (arr[mid] > x)
            right = mid;
        else {
            right = mid;
        }
    }
    if (k > left) {
        left = 0;
        right = (k > arrSize) ? arrSize: k; 
    } 
    else
        left = left - k + 1;
    if ((x - arr[left]) > (arr[right] - x)) {
        right++;
        left++;
    }
    for(i = 0; left < right; i++, left++) 
        ret_arr[i] = arr[left];
    *returnSize = i;
    return ret_arr;
}

int main(int argc, char **argv) {
    int len = atoi(argv[1]);
    int k = atoi(argv[2]);
    int x = atoi(argv[3]);
    int arr[100];
    int *ret_arr;
    int res_size;

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    ret_arr = findClosestElements(arr, len, k, x, &res_size); 
    for (int i = 0; i < res_size; i++)
        printf("%d ", ret_arr[i]);
    return 0;
}
