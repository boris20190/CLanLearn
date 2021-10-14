#include "stdio.h"

int main() {
    int num;
    int start = 1;
    int end = 1;
    int save_start = 1;
    int save_end = 1;
    int temp;
    scanf("%d",&temp);
    if(temp==0) {
        return 0;
    }
    while (1) {
        scanf("%d",&num);
        if(num==0) {
            if(end-start>save_end-save_start) {
                save_start = start;
                save_end = end;
            }
            break;
        }
        if(num>temp) {
            end++;
        } else {
            if(end-start>save_end-save_start) {
                save_start = start;
                save_end = end;
            }
            end++;
            start = end;
        }
        temp = num;
    }
    printf("%d %d\n",save_start,save_end);
    return 0;
}