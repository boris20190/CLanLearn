#include<stdio.h>
#include<math.h>

int main() {
    int num;
    printf("Put in the number\n");
    scanf("%d",&num);
    int decimalNum = 0;
    int i = 0;

    while(num!=0) {
        decimalNum += (num%10)*pow(7,i);
        i++;
        num /= 10;
    }

    printf("%d\n",decimalNum);
}
