#include <stdio.h>

int main() {
    int a = 5, b = 10, t = a;
    a = b;
    b = t;

    printf("After swapping: %d %d\n", a, b);

    return 0;
}
