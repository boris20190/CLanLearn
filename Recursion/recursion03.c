#include "stdio.h"

void isSort(int arr[],int len) {
    if(len<=1) {
        printf("YES\n");
        return;
    } else {
        if(*arr<*(arr+1)) {
            isSort(arr+1,len-1);
        } else {
            printf("NO\n");
            return;
        }
    }
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&arr[i]);
    }
    isSort(arr,10);
    return 0;
}
