#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n;
    while (sum >= 10) {

        int temp = sum;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
    }

    printf("Sum of digits until single digit: %d\n", sum);

    return 0;
}
