#include <stdio.h>

int main() {
    int pf, ic, cg;
    char roll[20];

    printf("Roll No: ");
    scanf("%s", roll);

    printf("Marks PF IC CG: ");
    scanf("%d %d %d", &pf, &ic, &cg);

    int total = pf + ic + cg;
    printf("Total = %d\nAverage = %.2f\n", total, total / 3.0);

    return 0;
}
