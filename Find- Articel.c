
#include <stdio.h>
int main()
{
    char str[1000];
    int i=0, count=0;

    gets(str);

    while(str[i]!='\0')
    {
        i++;
    }

    int len = i,a=0,an=0,the=0;

    for(i=0;i<len;)
    {
        if((i==0 && str[i]=='a' && str[i+1]==' ' || i==0 && str[i]=='a' && i==len-1)
                 || (str[i-1] == ' ' && str[i]=='a' &&  str[i+1]==' ')
                 || (str[i-1] == ' ' && str[i]=='a' && i==len-1)
                )
        {
            a++;
            count++;
            i = i+2;
        }
        else if((i==0 && str[i]=='a' && str[i+1]=='n' && str[i+2]==' ' || i==0 && str[i]=='a' && str[i+1]=='n' && i+1==len-1)
                 || (str[i-1] == ' ' && str[i]=='a' && str[i+1]=='n' && str[i+2]==' ')
                 || (str[i-1] == ' ' && str[i]=='a' && str[i+1]=='n' && i+1==len-1)
                )
        {
            an++;
            count++;
            i = i+3;
        }

        else if((i==0 && str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' ' || i==0 && str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && i+2==len-1)
                 || (str[i-1] == ' ' && str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' ')
                 || (str[i-1] == ' ' && str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && i+2==len-1)
                )
        {
            the++;
            count++;
            i+=4;
        }

        else{
            i++;
        }
    }

    printf("a = %d\nan = %d\nthe = %d\n",a,an,the);
    printf("there are %d article in the string\n", count);

    return 0;
}
