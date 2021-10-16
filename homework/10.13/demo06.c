#include<stdio.h>
#include<math.h>

int main() {
    int n;
    double res = 0;
    double x;
    printf("Put in n and x\n");
    scanf("%d %lf",&n,&x);
    for(int i = 0; i <= n; i++) {
        res += pow(x,i);
    }
    printf("%lf\n",res);
    return 0;
}
