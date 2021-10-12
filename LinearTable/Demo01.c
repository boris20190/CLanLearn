/*线性表要有的函数体：
 * InitList(L)          初始化，置空表L
 * ClearList(L)         清空线性表L
 * ListLength(L)        求表长
 * Ins(L,i,Item)        插入数据
 * Del(L,i)             删除数据
 * GetNext(L,Item,p)    获取Item所在结点的后继结点，后继结点值赋给p
 * GetNode(L,i)         获取表L中位置i的结点值
 * Loc(L,Item)          定位（按值查找）
 * GetPrior(L,Item,p)   获取Item所在结点的前驱结点，前驱结点值赋给p
 *
 */

#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 10
typedef struct List {
    int *data;//用指针创建了data数组
    int size;
} *ArrayList;

void init(ArrayList list) {
    list->data = (int *) malloc(sizeof(int)*MAX_SIZE);
    list->size = 0;
}

void insert(int element, int index, ArrayList list) {
    if(list->size>MAX_SIZE-1) {
        printf("table is full,can't be insert");
    }
    for (int i = list->size+1; i > index; --i) {
        list->data[i] = list->data[i-1];
    }

    list->data[index] = element;
    list->size++;
}

void delete(int index, ArrayList list) {
    if(list->size>MAX_SIZE-1) {
        printf("table is full,can't be insert");
    }
    for (int i = index; i < list->size; ++i) {
        list->data[i] = list->data[i+1];
    }
    list->data[list->size] = 0;
    list->size--;
}

void printTable(ArrayList list) {
    for (int i = 0; i < list->size; ++i) {
        printf("data=%d\n",list->data[i]);
    }
}

int main() {
    ArrayList list;
    init(list);
    for (int i = 0; i < MAX_SIZE-1; ++i) {
        insert(i,i,list);
    }
    printTable(list);
    printf("*********\n");
    delete(4,list);
    printTable(list);
    return 0;
}