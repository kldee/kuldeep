#include<stdio.h>
int prime(int n)
{
    int b=0;
    for(int i=1;i<=n;i++)
	{
        if(n%i==0)
		{
            b++;
        }
    }
    if (b==2)
	{
        return 1;
    }
    else
	{
        return 0;
    }
}
int magic(int n)
{
    int revn=0,d,orin;
    orin=n;
    while(n!=0)
	{
        d=n%10;
        revn=revn*10+d;
        n=n/10;
    }
    if(orin==revn)
	{
        return 1;
    }
    else
	{
        return 0;
    }
}
void main()
{
    int n,b=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    n-=1;
    while(n++)
	{
        if(prime(n)==1 && magic(n)==1)
		{
            break;
        }
    }
    printf("%d",n);
}