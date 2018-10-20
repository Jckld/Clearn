#include<stdio.h>
int num(int d)
{
	if(d==0)
	{	printf("ling");}
	else if(d==1)
	{	printf("yi");}
	else if(d==2)
	{	printf("er");}
	else if(d==3)
	{	printf("san");}
	else if(d==4)
	{	printf("si");}
	else if(d==5)
	{	printf("wu");}
	else if(d==6)
	{	printf("liu");}
	else if(d==7)
	{	printf("qi");}
	else if(d==8)
	{	printf("ba");}
	else
	{	printf("jiu");}
}
int main()
{
	int x,x0;
	scanf("%d",&x);
	if(x < 0)
	{
		x = - x;
		printf("fu ");
	}
	x0 = x;
	int mask=1;
	while(x>9) //此循环为根据位数判断应除的数，如：x=12345, mask=10000   应重点掌握!
	{
		x /= 10;
		mask *= 10;
	}
	x = x0; //注意让x恢复原值
	do {
		int d;
		d= x/mask;
		num(d);
		if(mask>9)
		{
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while(mask>0); //正向逐位读取数字，非常重要！！！！
	return 0;
}


