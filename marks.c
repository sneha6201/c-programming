#include <stdio.h>

int main() {
    int maths, physics, chemistry;
    int totalAll, totalMathsPhysics;

    // Input marks
    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    // Calculate totals
    totalAll = maths + physics + chemistry;
    totalMathsPhysics = maths + physics;

    // Check eligibility
    if (maths >= 65 && physics >= 55 && chemistry >= 50 &&
       (totalAll >= 190 || totalMathsPhysics >= 140)) {
        printf("Total Marks: %d\n", totalAll);
        printf("Total Marks (Maths + Physics): %d\n", totalMathsPhysics);
        printf("The candidate is eligible.\n");
    } else {
        printf("Total Marks: %d\n", totalAll);
        printf("Total Marks (Maths + Physics): %d\n", totalMathsPhysics);
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
