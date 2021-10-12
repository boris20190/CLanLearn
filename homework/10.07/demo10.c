#include<stdio.h>

int main() {
    int max,num;
    
    scanf("%d",&num);
    if(num==0) {
        return 0;
    }

    max = num;
    while(1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        if(num>max) {
            max = num;
        }
    }
    printf("%d\n",max);
    return 0;
}
