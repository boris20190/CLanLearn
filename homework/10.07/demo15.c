#include<stdio.h>
#include<math.h>

int main() {
    int n=0;
    double epsilon;
    scanf("%lf",&epsilon);
    while(1) {
        if(fabs(sin(pow(0.5,n))/pow(0.5,n) - 1) < epsilon) {
            break;
        }
        n++;
    }
    printf("%d\n",n);
    return 0;
}
