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
	while(x>9)
	{
		x /= 10;
		mask *= 10;
	}
	x = x0;
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
	}while(mask>0);
	return 0;
}


