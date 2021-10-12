#include<stdio.h>

int length(int num);
int maxLength(int arr[],int i);

int main() {
    int arr[9999],num;
    int i = 0;
    while(1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        arr[i] = num;
        i++;
    }
    
    for(int j = 0; j < i; j++) {
        if(length(arr[j])==maxLength(arr,i)) {
            printf("%d ",arr[j]);
        }
    }
    
    printf("\n");
    return 0;
}

int maxLength(int arr[],int i) {
    int maxLength;
    maxLength = length(arr[0]);
    for(int j = 1; j < i; j++) {
        if(length(arr[j])>maxLength) {
            maxLength = length(arr[j]);
        }
    }
    return maxLength;
}

int length(int num) {
    int length=0;
    while(num!=0) {
        num /= 10;
        length++;
    }
    return length;
}
