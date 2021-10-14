#include "stdio.h"

int length(int num);
void maxLength(int num,int *len);

int main() {
    int len = 0;
    int num = 0;
    maxLength(num,&len);

    return 0;
}

int length(int num) {
    int length=0;
    while(num!=0) {
        num /= 10;
        length++;
    }
    return length;
}

void maxLength(int num,int *len) {
    scanf("%d",&num);
    if(num!=0) {
        *len = length(num)>*len? length(num):*len;
        maxLength(num,len);
    }
    if(num!=0&& length(num)==*len) {
        printf("%d ",num);
    }
}