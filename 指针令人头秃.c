#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>

int main()
{
    const int Max=3;
    int var[]={10,100,200};
    int i, *p;
    p = var;
    for(i=0;i<Max;i++) {
        printf("address:var[%d] = %x\n",i,p);
        printf("value:var[%d] = %d\n",i,*p);
        p++;
    }
    return 0;
}
