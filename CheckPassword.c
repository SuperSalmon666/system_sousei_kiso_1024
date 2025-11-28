#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int length;
    int i;
    int upper = 0;
    int lower = 0;
    int digit = 0;

    printf("Enter your password\n");
    printf(">>> ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper = 1;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            lower = 1;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            digit = 1;
        }
    }

    if (length >= 8 && upper && lower && digit) {
        printf("IT'S A STRONG PASSWORD\n\n");
    } else {
printf("It's a weak password\n");
        printf("----Improvement----\n");

        if (length < 8) {
            printf("Use 8+ characters!\n");
        }
        if (!upper || !lower) {
            printf("Mix upper & lower case!\n");
        }
        if (!digit) {
            printf("Include a number!\n");
        }
    }

    return 0;
}
