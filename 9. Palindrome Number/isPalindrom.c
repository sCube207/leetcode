#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int x) {
    int num = x;
    int i = 1;
    if (x < 0)
        return 0;

    while (num > 0) {
        num /= 10; 
        i *= 10;
    }
    i /= 10;
    while (i > 0 && (x / i) % 10 == x % 10) {
        i /= 100;
        x /= 10;
    }
    if (i == 0)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]) {
    printf("%d ",isPalindrome(atoi(argv[1])));
}
