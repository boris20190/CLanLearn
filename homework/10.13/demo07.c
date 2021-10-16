#include "stdio.h"

int main() {
    int num;
    int sum = 0;
    printf("Put in the n\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; ++i) {
        for (int j = 0; j < i; ++j) {
            sum += i;
        }
        printf("%d ",sum);
        sum = 0;
    }
    printf("\n");
    return 0;
}
