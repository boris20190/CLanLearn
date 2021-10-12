#include<stdio.h>

int main()   {
    int num;
    printf("put in number\n");
    scanf("%d",&num);
    int res=0;
    while(num!=0) {
        if(num%2==1) {
            res++;
        }
        num /= 2;
    }
    printf("%d\n",res);
    return 0;
}

