/*变量有其独立的生存空间，无法直接使用第三变量写一个swap函数进行交换，故使用指针传地址进行交换*/
#include <stdio.h>

void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main()
{
    int num1=10,num2=22;

    swap(&num1,&num2); //注意此处交换的是地址&num

    printf("num1=%d, num2=%d\n",num1,num2);
    return 0;
}
