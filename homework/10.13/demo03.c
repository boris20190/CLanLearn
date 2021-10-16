#include<stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    while(1) {
        if(a>b) {
            a -= b;
        } else if(a<b) {
            b -= a;
        }
        else {
            printf("%d\n",a);
            break;
        }
    }
    return 0;
}
