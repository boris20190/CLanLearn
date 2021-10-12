#include<stdio.h>

int is_Prime(int);
int main() {
    int a,b;
    printf("Put in the min and max\n");
    scanf("%d %d",&a,&b);
    for(int i = a; i <= b; i++) {
        if(is_Prime(i)) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

int is_Prime(int num) {
    if(num<2) {
        return 0;
    }
    for(int i = 2; i*i <= num; i++) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}
