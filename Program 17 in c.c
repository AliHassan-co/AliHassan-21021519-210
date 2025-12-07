#include <stdio.h>

int main() {
    float num = 15.58971;
    int ip = (int)num;
    float fp = num - ip;

    printf("Int = %d\nFrac = %.5f\n", ip, fp);

    return 0;
}
