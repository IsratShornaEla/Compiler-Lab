#include<stdio.h>
int main()
{
    int i,j=0,k=0,l=0;
    char str[100],dgt[100],ope[100],sym[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            printf("%c",str[i]);
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dgt[j++]=str[i];
        }
         else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='=')
        {
            ope[k++]=str[i];
        }
        else
        {
            sym[l++]=str[i];
        }
    }
    dgt[j]='\0';
    ope[k]='\0';
    sym[l]='\0';
    printf("%s\n%s\n%s\n",dgt[j],ope[k],sym[l]);
}
