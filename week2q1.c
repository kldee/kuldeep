#include<stdio.h>
void main()
{
	int n,revn=0,d,orin;
	printf("enter value of n");
	scanf("%d",&n);
	orin = n;
	while(n!=0)
	{
		d=n%10;
		revn=revn*10+d;
		n=n/10;
		
	}
	if(orin==revn)
	{
		printf("Yes");
	}
	else
	
	{
		printf("No");
			}

}