#include<stdio.h>

int main() {
    int s1 = 0;
    for(int i = 1; i <= 100; i++) {
        s1 += i%2!=0?i:0;
    }
    int s2 = (1+100)*100/2-s1;
    printf("s1=%d s2=%d\n",s1,s2);
    return 0;
}
