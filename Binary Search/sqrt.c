#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("%d ", mySqrt(atoi(argv[i])));
    }
}

int mySqrt(int x) {  
    int left, right;
    int mid, ret;

    if (x == 0 || x == 1)
        return x;
    left = 0;
    right = x;
    while (left <= right) {
        mid = (left + right) / 2;
        if (mid <= 46340) {
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                left = mid + 1;
                ret = mid;
            }
            else
                right = mid - 1;
            }
        else
            right = mid - 1;
    }
    return ret;
}
