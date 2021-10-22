#include "stdio.h"
//printer *ptr
//*++ and ++*ptr
//
int main() {
    int num = 8;
    int *ptr = &num;
    printf("%d\n",num);
    *ptr = 12;
    printf("%d\n",num);
    (*ptr)++;
    printf("%d\n",num);
    ++(*ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",num);
    return 0;
}