#include <stdio.h>

int main() {
    float a, b, c;

    printf("a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("disc = %.2f\n", b * b - 4 * a * c);

    return 0;
}
