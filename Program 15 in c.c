#include <stdio.h>

int main() {
    int a = 8, b = 3, t = a;
    a = b;
    b = t;

    printf("%d %d\n", a, b);

    return 0;
}
