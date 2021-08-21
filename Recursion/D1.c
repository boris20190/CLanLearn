#include "stdio.h"

void reverse_num(int num) {
    if(num>1) {
        reverse_num(num-1);
    }
    printf("%d ",num);
}

int main() {
    int num;
    scanf("%d",&num);
    reverse_num(num);
    return 0;
}