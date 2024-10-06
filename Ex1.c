#include <stdio.h>

int main() {
    int n, sum = 0;
    long long product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n should be >= 1\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int element = 2 * i + 1;
        sum += element;
        product *= element;
    }

    printf("Sum of the first %d elements: %d\n", n, sum);
    printf("Product of the first %d elements: %lld\n", n, product);

    return 0;
}
