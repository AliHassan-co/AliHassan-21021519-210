#include <stdio.h>

int main() {
    int age;
    printf("Age: ");
    scanf("%d", &age);

    printf("Months = %d Days = %d\n", age * 12, age * 365);

    return 0;
}
