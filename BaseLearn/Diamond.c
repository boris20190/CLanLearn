#include "stdio.h"

int main() {
    int num;
    scanf("%d",&num);//总行数
    for (int i = 0; i < (num+1)/2; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("0");
        }
        for (int j = 0; j < num-2*i; ++j) {
            printf("1");
        }
        for (int j = 0; j < i; ++j) {
            printf("0");
        }
        printf("\n");
    }
    for (int i = 0; i < (num-1)/2; ++i) {
        for (int j = 0; j < (num-1)/2-i-1; ++j) {
            printf("0");
        }
        for (int j = 0; j < 2*i+3; ++j) {
            printf("1");
        }
        for (int j = 0; j < (num-1)/2-i-1; ++j) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
