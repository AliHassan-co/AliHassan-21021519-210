#include <stdio.h>

int main() {
    float f;
    printf("Enter F: ");
    scanf("%f", &f);

    printf("C = %.2f\n", (5.0 / 9) * (f - 32));

    return 0;
}
