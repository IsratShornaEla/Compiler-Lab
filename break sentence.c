#include<stdio.h>
int main()
{
    int i=0 ,count=0,j;
    char str[100];
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        else if(str[i+1]==' ')
        {
          continue;
        }
        else
        {
        printf("\n");
        }
i++;
    }

}
/*#include<stdio.h>
int main()
{
    int i=0,count=0,j;
    char str[100];
    gets(str);
    for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }

        else if(str[i+1]==' ')
            continue;

        else
        {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}*/
