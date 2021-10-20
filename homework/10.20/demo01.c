#include "stdio.h"

#define N 10

void insertion_sort(int arr[], int len);

void swap(int *a, int *b);

void selection_sort(int arr[], int len);

void bubble_sort(int arr[], int len);

int main() {
    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
//    insertion_sort(arr, N);
//    selection_sort(arr,N);
    bubble_sort(arr, N);
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertion_sort(int arr[], int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > key)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len) {
    int i, j;

    for (i = 0; i < len - 1; i++) {
        int min = i;
        for (j = i + 1; j < len; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
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