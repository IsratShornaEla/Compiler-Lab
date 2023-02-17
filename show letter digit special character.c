#include<stdio.h>
int main()
{
    int i,j=0,k=0,n=0,m=0 ;
    char str[100],dgt[100],smb[100],lop[100],op[100];
    gets(str);
      printf("\nLetters : %s",dgt);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            printf("%c",str[i]);

        }
        else if(str[i]>='0'&& str[i]<='9')
        {
           dgt[j++]=str[i];

        }
         else if((str[i]=='|'&&str[i+1]=='|')||(str[i]=='|'&&str[i-1]=='|')|| (str[i]=='&'&&str[i+1]=='&')
                ||(str[i]=='&'&&str[i-1]=='&')||(str[i]=='!'&&str[i+1]=='=')||(str[i]=='='&&str[i]=='=')
                 ||(str[i]=='='&&(str[i-1]=='!'||str[i-1]=='=')))
          {
              lop[n++]=str[i];
          }
        else if(str[i]=='+'|| str[i]=='-'|| str[i]=='*'|| str[i]=='/'||(str[i]=='='&&(str[i-1]!='!'||str[i-1]!='=')))
           {
              op[k++]=str[i];

           }
           else
           {
            smb[m++]=str[i];
           }

    }
  dgt[j]='\0';
  op[k]='\0';
  lop[n]='\0';
  smb[m]='\0';
    printf("\nDigits : %s",dgt);
     printf("\nSymbol:  %s",smb);
     printf("\nOperator:  %s",op);
     printf("\nLogical Op: %s",lop);
    return 0;
}

