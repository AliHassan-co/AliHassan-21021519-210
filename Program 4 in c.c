#include <stdio.h>

int main() {
    int y;
    printf("Enter years: ");
    scanf("%d", &y);

    printf("Months: %d\n", y * 12);

    return 0;
}
