#include "stdio.h"

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pa,*qa;
    pa = a;
    qa = &a[2];
    if(pa<qa) {
        printf("the address in pa is lower than in qa ");
        printf("between pa and qa there is %d elements",(qa-pa));
    }
    return 0;
}