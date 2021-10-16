#include "stdio.h"

int main() {
    float num,res=0;
    int fl = 0;
    do {
        scanf("%f",&num);
        if((num<res||fl==0)&&num>0) {
            res = num;
            fl = 1;
        }
    } while (getchar()!='\n');
    printf("%f\n",res);
    return 0;
}
