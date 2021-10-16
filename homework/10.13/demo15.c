#include "stdio.h"

int main() {
    int n;
    printf("Put in n:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Put in elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int maxi=0,mini=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]>arr[maxi]) {
            maxi = i;
        }
        if(arr[i]<arr[mini]) {
            mini = i;
        }
    }
    printf("Max=arr[%d]=%d\tMin=arr[%d]=%d\n",maxi,arr[maxi],mini,arr[mini]);
    printf("Max~SWAP~Min\n");
    arr[mini] ^= arr[maxi];
    arr[maxi] ^= arr[mini];
    arr[mini] ^= arr[maxi];
    printf("arr[%d] = %d\tarr[%d] = %d\n",maxi,arr[maxi],mini,arr[mini]);
    printf("\n");
    return 0;
}
