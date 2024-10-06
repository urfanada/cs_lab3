#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;

    printf("Enter the number of floats (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter float %d: ", i + 1);
        scanf("%f", &num);
        sum = sum + num;
    }

    printf("Sum of the floats: %.2f\n", sum);

    return 0;
}
