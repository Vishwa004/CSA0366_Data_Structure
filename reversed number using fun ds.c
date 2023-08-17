#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
static int rev(int x)
{
	int y=0;
	while(x!=0)
	{
		int n=x%10;
		if(y> int Max/10||y< int Min/10)
		{
			return 0;
		}
		y=y*10+n;
		x/=10;
	}
	return y;
}
int main(void)
{
	inr x=123;
	printf("Original integer : %d",x);
	printf("\nReverse integer : %d",reve(x));
	return 0;
}
