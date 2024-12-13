#include <stdio.h>
#include <string.h>

int main() {
    char str1[40] = "Hello"; 
    char str2[10] = " World!";
    printf("Length of str1: %lu\n", strlen(str1));
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    int length = strlen(str1);
    for (int i = 0; i < length / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[length - i - 1];
        str1[length - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str1);

    return 0;
}