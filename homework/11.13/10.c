#include "stdio.h"

void compression(int arr[],int n) {
    int temp = arr[0];
    printf("%d ",arr[0]);
    for (int i = 1; i < n; ++i) {
        if(arr[i]!=temp) {
            printf("%d ",arr[i]);
            temp = arr[i];
        }
    }
}

int main() {
    int n;
    printf("Put in n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    compression(arr,n);
    printf("\n");
    return 0;
}