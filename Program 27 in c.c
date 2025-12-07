#include <stdio.h>

int main() {
    int h, m, s;

    printf("h m s: ");
    scanf("%d %d %d", &h, &m, &s);

    printf("Seconds = %d\n", h * 3600 + m * 60 + s);

    return 0;
}
