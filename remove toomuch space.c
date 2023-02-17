#include<stdio.h>
int main()
{
    int i;
    char str[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        else if (str[i+1]==' ')
        {
            continue;
        }
        else
        {
            printf(" ");
        }
    }
}
