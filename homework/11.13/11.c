#include "stdio.h"

void loop_move(int arr[],int m,int n) {
    int temp = arr[m-1];
    for (int i = 0; i < m; ++i) {
        arr[(i+n)%m] = arr[i];
    }
    arr[(m-1+n)%m] = temp;
}
int main() {
    int m,n;
    printf("Put in m and n:\n");
    scanf("%d %d",&m,&n);
    int arr[m];
    printf("Put in elements:\n");
    for (int i = 0; i < m; ++i) {
        scanf("%d",&arr[i]);
    }
    loop_move(arr,m,n);
    for (int i = 0; i < m; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}