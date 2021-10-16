#include "stdio.h"

int is_alternate(int arr[],int n);

int main() {
    int n;
    printf("Put in n:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    is_alternate(arr,n)==1? printf("TRUE\n"): printf("FALSE\n");
    return 0;
}

int is_alternate(int arr[],int n) {
    for (int i = 0; i < n; ++i) {
        if((arr[i]+arr[i+1])%2==0) {
            return 0;
        }
    }
    return 1;
}
