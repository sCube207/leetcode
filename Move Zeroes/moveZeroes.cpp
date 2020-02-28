#include <stdlib.h>
#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int *zero;
    int *num;
    zero = num = nums;

    while (num < &nums[numsSize] && zero < &nums[numsSize]) {
        if (*num != 0 && *zero == 0 && num > zero) {
            *zero++ = *num;
            *num++ = 0;
        } else {
            if (*zero != 0)
                zero++;
            if (*num == 0 || num <= zero)
                num++;
        }
    }
}

int main() {
    int s;
    scanf("%d", &s);
    int *p = (int *) malloc(sizeof(int) * s);
    for (int i = 0; i < s; i++)
        scanf("%d", &p[i]);
    moveZeroes(p, s);
    for (int i = 0; i < s; i++)
        printf("%d ", p[i]);
    printf("\n");
    return 0;
}
