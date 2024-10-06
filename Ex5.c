#include <stdio.h>

int main() {
    float runner1Coord, runner1Step, runner2Coord, runner2Step;
    int time;

    printf("Enter the coordinates and speed of Runner 1: ");
    scanf("%f %f", &runner1Coord, &runner1Step);

    printf("Enter the coordinates and speed of Runner 2: ");
    scanf("%f %f", &runner2Coord, &runner2Step);

    if ((runner1Step > 0 && runner2Step > 0 && runner1Coord > runner2Coord) || 
        (runner1Step < 0 && runner2Step < 0 && runner1Coord < runner2Coord) ||
        (runner1Step > 0 && runner2Step < 0 && runner1Coord > runner2Coord) ||
        (runner1Step < 0 && runner2Step > 0 && runner1Coord < runner2Coord)) {
        printf("NEVER\n");
    } else {
        for (time = 0; time <= 1000; time++) {
            if (runner1Coord == runner2Coord) {
                printf("They meet at position %.2f at time %d\n", runner1Coord, time);
                return 0;
            }
            runner1Coord = runner1Coord + runner1Step;
            runner2Coord = runner2Coord + runner2Step;
        }
        printf("NEVER\n");
    }

    return 0;
}
