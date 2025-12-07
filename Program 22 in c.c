#include <stdio.h>

int main() {
    char name[50], gender[10];
    int age;
    float height;

    printf("Name: ");
    scanf("%s", name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Height: ");
    scanf("%f", &height);

    printf("Gender: ");
    scanf("%s", gender);

    printf("%s %d %.2f %s\n", name, age, height, gender);

    return 0;
}
