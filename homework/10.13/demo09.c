#include "stdio.h"

int main() {
    float k,num;
    int cont = 0;
    printf("Put in k:\n");
    scanf("%f",&k);
    printf("Put in the numbers, press Enter to end\n");
    do {
        scanf("%f",&num);
        cont++;
        if(k<num) {
            printf("%d\n",cont);
            break;
        }
    } while (getchar()!='\n');
    return 0;
}
