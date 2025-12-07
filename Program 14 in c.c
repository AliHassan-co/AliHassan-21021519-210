#include <stdio.h>

int main() {
    float mm;

    printf("mm: ");
    scanf("%f", &mm);

    printf("Inches = %.3f\n", mm / 25.4);

    return 0;
}


