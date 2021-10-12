#include<stdio.h>

int main() {
    int num;
    printf("Put in the number\n");
    scanf("%d",&num);
    int target=0;
    while(num!=0) {
        target = target*10+num%10;
        num /= 10;
    }
    printf("%d\t%x\n",target,target);
    return 0;
}
