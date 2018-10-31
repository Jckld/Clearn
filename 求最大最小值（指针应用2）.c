/*指针函数应用场景：
    函数返回多个值，某些值就只能通过指针返回
    传入的参数也部分或是全部需要保存并作为结果变量带回main函数
*/
#include <stdio.h>

void minmax(int a[], int len, int *min, int *max) //此处注意用指针
{
    int i;
    *min = *max = a[0]; //此处不能初始化为0，而是初始化为数组中第一个元素
    for(i=1;i<len;i++) {
        if(a[i] < min) {
            *min = a[i]; //仔细研究此处*min与main函数中min变量的不同
        }
        if(a[i] > max) {
            *max = a[i]; //同理
        }

    }
}

int main(void)
{
    int a[] = {4,3,2,1,8,7,6,5,12,11,10,9,};
    int min,max;

    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);  //用sizeof(a)/sizeof(a[0])求出数组元素个数，以及注意此处还是取地址

    printf("min=%d, max=%d\n",min,max);
    return 0;
}
