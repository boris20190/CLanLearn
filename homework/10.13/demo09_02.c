#include "stdio.h"

int main() {
    float num, temp = 0;
    int cont = 0, save_cont = 0;

    while (1) {
        scanf("%f", &num);
        if (getchar() == '\n') {
            break;
        }
        if (num < 0) {
            if (save_cont < cont) {
                save_cont = cont;
            }
            cont = 0;
            continue;
        }
        if (temp == 0) {
            temp = num;
        }
        if (temp < num) {
            cont++;
        } else {
            if (save_cont < cont) {
                save_cont = cont;
            }
            cont = 0;
            temp = num;
            cont++;
        }
    }

    printf("%d\n", save_cont);
    return 0;
}
