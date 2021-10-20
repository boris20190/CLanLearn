#include "stdio.h"

void bubble_sort(int arr[], int len);

int main() {
    int m,n;
    printf("Put in Column and Row\n");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Put in numbers\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < m; ++i) {
        bubble_sort(arr[m],n);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void bubble_sort(int arr[], int len) {
    int i, j, temp;
    int fl = 1;
    for (i = 1; fl;i++) {
        fl = 0;
        for (j = len-1; j >= i; --j) {
            if(arr[j-1]>arr[j]) {
                fl = 1;
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}