#include<stdio.h>
#include<math.h>

long factorial(int);
int func(int,double);

int main() {
    int x;
    double epsilon;
    scanf("%d %lf",&x,&epsilon);
    printf("n = %d\n",func(x,epsilon));
    return 0;
}

long factorial(int num) {
    if(num==0) {
        return 1;
    }
    long fac = 1;
    for(int i = 1;i <= num;i++) {
        fac *= i;
    }
    return fac;
}

int func(int x, double epsilon) {
    long double res=0;
    int cont=0;
    while (1) {
        if(fabsl(res- exp(x))<epsilon) {
            break;
        }
        res += pow(x,cont)/ factorial(cont);
        cont++;
    }
    return cont;
}

