#include<stdio.h>

void binaryPrint(int);

int main()   {
    int a;
    printf("Put in the target number\n");
    scanf("%d",&a);
    binaryPrint(a);
    printf("\n");
    printf("%d\n",a);
    printf("put in i and k\n");
    int i,k;
    scanf("%d %d",&i,&k);
    for(int j = 0; j < k; j++) {
        a |= (1<<(i-j-1));
    }
    binaryPrint(a);
    printf("\n");
    printf("%d\n",a);
    return 0;
}

void binaryPrint(int num) {
    if(num/2!=0) {
        binaryPrint(num/2);
    }
    printf("%d ",num%2);
}
