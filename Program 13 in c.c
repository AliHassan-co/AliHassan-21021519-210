#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float r;

    printf("r: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", PI * r * r);

    return 0;
}
