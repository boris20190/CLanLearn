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
        reverse_num(num - 1);//这里不能写成--num。因为如果是--num则为先-1后压栈，最终入栈的数依次为4 3 2 1。最后num=1直接输出1
    }                             //因此如果输入5，则最终输出结果不为1 2 3 4 5，而是1 1 2 3 4
    printf("%d ", num);           //num-1则会先压栈后-1进入下一次循环。
}                                 //肯定不能是num--，因为这意味着先进行递归后-1，从而永远是num进入死循环

int main() {
    int num;
    scanf("%d", &num);
    reverse_num(num);
    return 0;
}