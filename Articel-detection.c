#include<stdio.h>
int main()
{
    int i,len=0;
    char str[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
     len++;
    }
    for(i=0;i<len;i++)
    {
        if((a[i]<65 || a[i]>90)&&(a[i]<97||a[i]>122))
        {
            if((a[i]==' ' && a[i-1]=='a' && (a[i-2]<65||a[i-2]>90)&&(a[i-2]<97||a[i-2]>122))||(a[i]==' ' && a[i-1]=='a' && i-1==(len-1)))
            {
                printf("a\n");
            }
            else if((a[i]==' ' && a[i-1]=='n' && a[i-2]=='a'&&(a[i-3]<65||a[i-3]>90)&&(a[i-3]<97||a[i-3]>122))||(a[i]==' ' &&a[i-1]=='n'&& a[i-2]=='a' && i-2==(len-1)))
            {
                printf("an\n");
            }
            else if((a[i]==' ' && a[i-1]=='e' && a[i-2]=='h'&& a[i-3]=='t'&&(a[i-4]<65||a[i-4]>90)&&(a[i-4]<97||a[i-4]>122))||(a[i]==' ' &&a[i-1]=='e'&& a[i-2]=='a' && i-2==(len-1)))
            {
                printf("an\n");
            }
        }
    }
}
