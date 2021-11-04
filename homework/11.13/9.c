#include "stdio.h"

void replace(int arr[],int n,int x) {
    int fl=1;
    for (int i = 0; i < n; ++i) {
        if(arr[i]!=x) {
            fl = 1;
        }
        if(fl) {
            printf("%d ",arr[i]);
            if(arr[i]==x) {
                fl = 0;
            }
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
    replace(arr,n,x);
    return 0;
}