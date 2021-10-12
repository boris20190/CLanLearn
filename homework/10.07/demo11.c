#include<stdio.h>

int main() {
    int min,num;
    
    scanf("%d",&num);
    if(num==0) {
        return 0;
    }

    min = num;
    while(1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        if(num<min) {
            min = num;
        }
    }
    printf("%d\n",min);
    return 0;
}
