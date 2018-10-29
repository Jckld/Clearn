// 利用数组构造100以内素数表 
#include<stdio.h>
int main()
{
	int i;
	int prime[100]={0,0};
	for(i=2;i<100;i++) {
		prime[i] = 1;
	}
	int x=2;
	while(x<100) {
		if(prime[x]==1) {
			for(i=2;i*x<100;i++) {
				prime[i*x] = 0;
			}
		}
		x++;
	}
	printf("2");
	for(i=3;i<100;i++) {
		if(prime[i]==1) {
			printf(" %d",i);
		}
	}
	return 0;
}
