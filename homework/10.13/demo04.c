#include<stdio.h>

int main() {
    int n,k,cont=0;
    scanf("%d %d",&n,&k);
    while(1) {
       if(n>=k) {
          n -= k;
          cont++;
       }else {
          printf("%d %d\n",cont,n);
          break;
       }
    } 
    return 0;
}
