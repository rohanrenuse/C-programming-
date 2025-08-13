#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;  // Make it positive if it's negative
    }

    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
