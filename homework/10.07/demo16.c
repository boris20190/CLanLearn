#include<stdio.h>
#include<math.h>

int main() {
    double epsilon;
    scanf("%lf",&epsilon);
    int n = 1;
    while(1) {
        if(fabs(pow(1.0+1.0/n,n)-exp(1))<epsilon) {
            break;
        }
        n++;
    }
    printf("%d\n",n);
    return 0;
}
