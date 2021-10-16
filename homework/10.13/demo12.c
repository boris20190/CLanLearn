#include "stdio.h"

int main() {
    int num, max, cont;
    int save_cont = 0;
    int fl = 1;
    do {
        scanf("%d", &num);
        if (fl == 1||num>max) {
            fl = 0;
            max = num;
            cont = 0;
        } else {
            cont++;
            if(max==num) {
                fl = 2;
                save_cont = save_cont<cont?cont:save_cont;
            }
        }
    } while (getchar() != '\n');

    if(fl==2) {
        printf("%d\n",save_cont-1);
    } else {
        printf("%d\n",max);
    }
    return 0;
}
