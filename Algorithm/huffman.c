#include "stdlib.h"
#include "stdio.h"

typedef struct {
    int weight;
    int parent,lch,rch;
}*HuffmanTree;

void CreatHuffmanTree(HuffmanTree HT,int n) {
    if(n<=1) {
        return;
    }
    int m = 2*n-1;

}