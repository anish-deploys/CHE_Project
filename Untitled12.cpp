// WAP that calculate the sum of first and last digit
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the value of n=");  
	scanf("%d",&n);
	int first, last,sum;
	last=n%10;
	int x;
	x=log10(n);
	first=n/pow(10,x);
	sum=first+last;
	printf("Required result=%d",sum);
}
	


