#include <stdio.h>

int main() {
    float r;
    const float PI = 3.14159;

    printf("r: ");
    scanf("%f", &r);

    printf("Area = %.2f\nCircumference = %.2f\n", PI * r * r, 2 * PI * r);

    return 0;
}
