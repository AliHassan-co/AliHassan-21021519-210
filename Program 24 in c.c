#include <stdio.h>

int main() {
    float m[5], total = 0;

    for (int i = 0; i < 5; i++) { 
        printf("Sub %d: ", i + 1); 
        scanf("%f", &m[i]); 
        total += m[i]; 
    }

    printf("Total = %.2f\nAverage = %.2f\n", total, total / 5);

    return 0;
}

