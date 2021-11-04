#include "stdio.h"

int f(int a[],int n, int p) {
    int fl = 1;
    for (int i = 0; i < n-1; ++i) {
        if(a[i]*a[i+1]>0) {
            fl = 0;
            break;
        }
    }

    if(fl) {
        p = 0;
        for (int i = 0; i < n; ++i) {
            if(a[i]>0) {
                p += a[i];
            }
        }
    } else {
        p = 1;
        int fl2 = 0;
        for (int i = 0; i < 50; ++i) {
            if(a[i]<0) {
                p *= a[i];
            }
            if(a[i]<0) {
                fl2 = 1;
            }
        }
        if(!fl2) {
            printf("Error\n");
            return 0;
        }
    }
    return p;
}
int main() {
    int x[50],p;
    for (int i = 0; i < 50; ++i) {
        scanf("%d",&x[i]);
    }
    p = f(x,50,p);
    if(p) {
        printf("%d",p);
    }
    return 0;
}