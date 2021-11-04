#include "stdio.h"

void delete(int arr[],int n,int x) {
    for (int i = 0; i < n; ++i) {
        if(arr[i]!=x) {
            printf("%d ",arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Put in n:\n");
    scanf("%d",&n);
    int x;
    printf("Put in x:\n");
    scanf("%d",&x);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    delete(arr,n,x);
    return 0;
}