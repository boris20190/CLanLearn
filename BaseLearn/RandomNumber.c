#include "stdio.h"
#include "stdlib.h"
#include "time.h"

//取任意范围的随机数
int main() {
    int randomNumber;
    srand(time(0));//修改随机数种子，与时间挂钩，保证随机性
    int max = 15;//范围上限
    int min = 6;//范围下限
    for (int i = 0; i < 10; ++i) {
        randomNumber = rand() % (max - min + 1) + min;//生成随机数
        printf("%d ", randomNumber);
    }
    return 0;
}
