#include<stdio.h>
void main()
{

    int n,f,l,p=1,o;
    scanf("%d",&n);
    l=n%10;
    o=n;
    while(n!=0)
	{
        f=n%10;
        n=n/10;
        p=p*10;
    }
    p=p/10;
    o=o+(l-f)*p+(f-l);
    printf("%d",o);
}