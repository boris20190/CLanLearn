#include "stdio.h"

int main() {
    float num, temp;
    int fl = 0;
    scanf("%f",&temp);
    do {
        scanf("%f",&num);
        if (temp > num) {
            fl = 1;
            break;
        }
        temp = num;
    } while (getchar() != '\n');

    fl == 1 ? printf("FALSE\n") : printf("TRUE\n");
    return 0;
}
