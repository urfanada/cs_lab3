#include <stdio.h>

int main() {
    int a, b, k, sum = 0;

    printf("Enter the two integers a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter the integer k: ");
    scanf("%d", &k);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum = sum + i;
        }
    }

    printf("Sum of elements divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
}

