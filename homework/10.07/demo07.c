#include<stdio.h>
#include<stdlib.h>

void sevenBase(int);

int main() {
    int num;
    printf("Put in the number\n");
    scanf("%d",&num);
    if(num<0) {
        num = abs(num);
        printf("-");
    }
    sevenBase(num);
    printf("\n");
    return 0;
}

void sevenBase(int num) {
    if(num/7!=0) {
        sevenBase(num/7);
    }
    printf("%d",num%7);
}
