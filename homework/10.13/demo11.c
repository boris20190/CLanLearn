#include "stdio.h"

int main() {
    float num,temp;
    int fl = 0,cont = 0;
    do {
        if(!fl) {
            scanf("%f",&temp);
            fl = 1;
        }
        scanf("%f",&num);
        if(num<temp) {
            cont++;
            printf("%f ",temp);
        }
        temp = num;
    } while (getchar()!='\n');
    printf("\nNumber of elements:\n");
    printf("%d\n",cont);
    return 0;
}
