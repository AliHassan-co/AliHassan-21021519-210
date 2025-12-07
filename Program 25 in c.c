#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, s;

    printf("a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    printf("Area = %.2f\n", sqrt(s * (s - a) * (s - b) * (s - c)));

    return 0;
}
