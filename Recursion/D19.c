#include "stdio.h"

int acounter(void) {
    char ch;
    ch=getchar();
    if(ch=='.') {
        return 0;
    }
    return (ch=='a') +acounter();//如果递归函数中没有变量，则每次叠加的是递归函数的执行次数————递归计数器原理
}

int main() {
    printf("%d",acounter());
    return 0;
}