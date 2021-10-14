#include "stdio.h"

int main() {
    int min,num;
    scanf("%d",&min);
    while (1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        if(min>num) {
            min = num;
        }
    }
    printf("%d",min);
    return 0;
}