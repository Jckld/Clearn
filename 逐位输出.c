#include<stdio.h>
//正序逐位输出 700 -> 7 0 0
//int main()
//{
//	int x,x0;
//	scanf("%d",&x);
//	if(x < 0)
//	{
//		x = - x;
//		printf("fu ");
//	}
//	x0 = x;
//	int mask=1;
//	while(x>9)
//	{
//		x /= 10;
//		mask *= 10;
//	}
//	x = x0;
//	do {
//		int d;
//		d= x/mask;
//		printf("%d",d);
//		if(mask>9)
//		{
//			printf(" ");
//		}
//		x %= mask;
//		mask /= 10;
//	}while(mask>0);
//	return 0;
//}

//逆序逐位输出 700 -> 0 0 7
//int main()
//{
//	int num,d;
//	scanf("%d",&num);
//	while(num!=0)
//	{
//		d = num % 10;
//		num /= 10;
//		printf("%d",d);
//		if(num>0)
//		{
//			printf(" ");
//		}
//	}
//}


