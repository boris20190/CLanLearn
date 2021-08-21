#include "stdio.h"

/*递归前带return可看作循环，没有压栈弹栈的过程
 * 从大到小输出
 * 输入5
 * 输出5 4 3 2 1
 * void reverse_num(int num) {
    if(num>=1) {
        printf("%d ",num);
        return reverse_num(num-1);
    }
}
如果要利用递归压栈弹栈特性，就不带return
要利用递归的循环特性，作为区分，就带return
*/
void reverse_num(int num) {
    if (num > 1) {
        reverse_num(num - 1);
    }
    printf("%d ", num);
}

int main() {
    int num;
    scanf("%d", &num);
    reverse_num(num);
    return 0;
}