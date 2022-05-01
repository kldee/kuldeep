#include<stdio.h>
#include<string.h>
void main()
{
    char alp[26]="abcdefghijklmnopqrstuvwxyz",capalp[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",input[100];
    int cont[26],capcont[26];
    printf("write here:\n");
    gets(input);
    for(int i=0;i<26;i++)
	{
        int b=0;
        for(int j=0;j<strlen(input);j++)
		{
            if(input[j]==capalp[i])
			{
                b++;
            }
        }
        capcont[i]=b;
    }
    for(int i=0;i<26;i++){
        int b=0;
        for(int j=0;j<strlen(input);j++)
		{
            if(input[j]==alp[i])
			{
                b++;
            }
        cont[i]=b;
    }
    }
    for(int k=0;k<26;k++)
	{
        if(capcont[k]>0)
		{
            printf("%c -> %d\n",capalp[k],capcont[k]);
        }
    }
    for(int k=0;k<26;k++)
	{
        if(cont[k]>0)
		{
            printf("%c -> %d\n",alp[k],cont[k]);
        }
    }
    
}