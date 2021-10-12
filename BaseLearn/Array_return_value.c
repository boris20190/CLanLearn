#include <stdio.h>

/* 要生成和返回随机数的函数 */
int * getRandom( )
{
    static int  r[10];//要标注static，否则数组作为返回值会报错。static标注就可以自动在内存中申请位置，不需要malloc

    for (int i = 0; i < 10; ++i)
    {
        r[i] = i;
    }

    return r;
}

/* 要调用上面定义函数的主函数 */
int main ()
{
    /* 一个指向整数的指针 */
    int *p;

    p = getRandom();
    for (int i = 0; i < 10; i++ )
    {
        printf("%d\n",*(p+i));  //p储存的是数组r首项的地址值，是单一值。*p是地址值所代表的值
        //*(p+i)每次打印的地址值+1，因为数组分配的内存空间是连续的，所以地址值+1就是后一项
    }

    return 0;
}