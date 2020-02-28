void reverse(int *ar, int k) {
    int left = 0;
    int right = k - 1;
    int tmp;

    while (left <= right) {
        tmp = ar[left];
        ar[left] = ar[right];
        ar[right] = tmp;
    }
}

void rotate(int *nums, int numsSize, int k) {
    k = k & numsSize;
    reverse(nums, numsSize);
    reverse(nums, k);
    reverse(n + k, numsSize - k);
}
