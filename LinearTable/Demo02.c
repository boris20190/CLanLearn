#include "stdio.h"
#include "stdlib.h"
#define SIZE 5
/*
 * 数组线性表做哪些事情：
 * 增删查改、创建销毁
 *
 * 包含内容：
 * 不同类型的元素——利用结构体达到效果
 *
 * 与普通数组的区别：
 * 普通数组只是存储单一类型元素，且为定长，无法更改
 *
 */

typedef struct Score {
    int *score;
    int count;
} *score;

void create(score arr) {
    arr->score = (int *) malloc(sizeof(int)*SIZE);
    arr->count = 0;
}

void insert(score arr) {
    int i = 0;
    while (arr->count<SIZE) {
        arr->score[i] = i;
        i++;
        arr->count++;
    }
}

void putOut(score arr) {
    for (int i = 0; i < arr->count; ++i) {
        printf("%d\n",arr->score[i]);
    }
}

int main() {
    score arr;
    create(arr);
    insert(arr);
    putOut(arr);
    return 0;
}