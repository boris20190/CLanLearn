#include "stdio.h"

int main() {
    int max,num;
    scanf("%d",&max);
    while (1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        if(max<num) {
            max = num;
        }
    }
    printf("%d",max);
    return 0;
}