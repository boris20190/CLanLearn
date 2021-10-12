#include<stdio.h>

void upLength(int arr[],int i);
int main() {
    int num,arr[9999];
    int i=0;
    
    while(1) {
        scanf("%d",&num);
        if(num==0) {
            break;
        }
        arr[i] = num;
        i++;
    }
    upLength(arr,i);
    return 0;
}

void upLength(int arr[],int i) {
    int start = 0;
    int end = 0;
    int save_start = 0;
    int save_end = 0;
    while(1) {
        if(arr[end+1]>arr[end]) {
            end++;
        } else {
            if(end-start>save_end-save_start) {
                save_start = start;
                save_end = end;
            }
            end++;
            start = end;
        }
        if(end==i) {
            if(end-start>save_end-save_start) {
                save_start = start;
                save_end = end;
            }
            break;
        }
    }

    printf("%d %d\n",save_start+1,save_end+1);
}
