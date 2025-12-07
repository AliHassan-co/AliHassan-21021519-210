#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Months: %d\n", age * 12);

    return 0;
}
