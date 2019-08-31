#include <stdio.h>
#include <string.h>

int  lengthOfLongestSubstring(char * s);

int main(int argc, char **argv) {
    int i;

    for (i = 1; i < argc; i++) {
        printf("%d ", lengthOfLongestSubstring(argv[i]));
    }
}

int lengthOfLongestSubstring(char *s) {
    short bitMask[255];
    int length = 0;
    int index = 0;
    int maxLength = 0;

    for (int i = 0; i < (int)strlen(s); i++)
        for (int j = i + 1; j < (int)strlen(s); j++) {
            index = s[j];
            if (bitMask[index] == 0) {
                bitMask[index] = 1;
                length++; 
            } else {  
                for (int k = 0; k < 255; k++)
                    bitMask[k] = 0;
                maxLength = maxLength > length ? maxLength : length;
                length = 0;
           }
        }
    if (maxLength == (int)strlen(s))
        return 0;
    else
        return maxLength;
}
