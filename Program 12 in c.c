#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float r, h;

    printf("r h: ");
    scanf("%f %f", &r, &h);

    printf("Volume = %.2f\n", PI * r * r * h);

    return 0;
}
