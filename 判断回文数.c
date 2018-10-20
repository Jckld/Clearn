#include<stdio.h>
int reverse(int num)
{	
	int num0=num,Reverse = 0;
	int r=0,sum=0;
	while(num!=0)
	{
		r = num%10;
		num /= 10;
		sum = 10*sum + r; 
	}
	if(num0 == sum)
	{	Reverse = 1;}
	return Reverse;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(reverse(num))
	{	printf("是回文数");}
	else
	{	printf("不是回文数");} 
}
