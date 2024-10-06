#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0) return 1;

    float height, tallest, shortest;
    int tallestPos = 1, shortestPos = 1;

    printf("Enter the height of student 1: ");
    scanf("%f", &height);
    tallest = shortest = height;

    for (int i = 2; i <= n; i++) {
        printf("Enter the height of student %d: ", i);
        scanf("%f", &height);
        if (height > tallest) { tallest = height; tallestPos = i; }
        if (height < shortest) { shortest = height; shortestPos = i; }
    }

    printf("Tallest student is at position %d with height %.2f\n", tallestPos, tallest);
    printf("Shortest student is at position %d with height %.2f\n", shortestPos, shortest);

    return 0;
}
