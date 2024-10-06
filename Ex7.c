#include <stdio.h>

int main() {
    int n, num;
    int sum_even = 0, sum_odd = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }
    }

    printf("Sum of even elements: %d\n", sum_even);
    printf("Sum of odd elements: %d\n", sum_odd);

    return 0;
}
