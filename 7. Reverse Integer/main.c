#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int reverse(int x);

int main(int argc, char **argv) {
    int i = 1;

    while (i < argc) {
        printf("%d ",reverse(atoi(argv[i])));
        i++;
    }
}

int reverse(int x) { 
    int result = 0;
    int pop;

    while (x != 0) {
        pop = x % 10;
        x /= 10;
        if ((result > INT_MAX / 10)
                || (result == INT_MAX / 10 && pop > 7))
            return 0; 
            if ((result < INT_MIN / 10)
                || (result == INT_MIN / 10 && pop < -8))
            return 0;
            result = result * 10 + pop;
    }
    return result;
}
