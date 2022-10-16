#include <stdio.h>
int main() {
    int num_dividend, num_divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &num_dividend);
    printf("Enter divisor: ");
    scanf("%d", &num_divisor);
    quotient = num_dividend / num_divisor;
    remainder = num_dividend % num_divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
