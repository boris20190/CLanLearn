#include "stdio.h"

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pa;
    pa = a;
//    pa++;
    printf("*a = %d\t,a[1] = %d\t,*pa = %d\n",*(a+1),a[0],pa[1]);
    return 0;
}