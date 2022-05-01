#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    printf("test cases:");
    scanf("%d",&t);
    while(t--)
	{
        char a[100];
        printf("Enter the sequence:");
        scanf("%s",a);
        int o=0,z=0;
        for(int i=0;i<strlen(a);i++)
		{
        	
            if(a[i]=='0')
			{
                z++;
            }
            else if(a[i]=='1')
			{
                o++;
            }
        }
        if(z==o && strlen(a)==2)
		{
            printf("0");
            return 0;
        }
        else if(z==o)
		{
            int o=0,z=0;
        for(int i=0;i<strlen(a)-1;i++)
		{
            if(a[i]=='0')
			{
                z++;
            }
            else if(a[i]=='1')
			{
                o++;
            }
        }
        z>o?printf("%d",o):printf("%d",z);
        return 0;
        }
        else if(z!=o)
		{
            z>o?printf("%d",o):printf("%d",z);
            return 0;
        }
    }
}
