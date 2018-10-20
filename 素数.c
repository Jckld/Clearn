#include<stdio.h>
int main()
{
	int num,i;
	int isPrime = 1;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if(isPrime == 1)
	{	printf("It's a prime.");}
	else
	{	printf("It's not a prime.");}
	return 0;
}
