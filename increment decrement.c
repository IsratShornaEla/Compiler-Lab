#include<stdio.h>
int main()
{
    int j,i;

    while( scanf("%d",&i)!=EOF)
  {
       i=i++;
       j=i;
    printf("i=%d\n",i);
     printf("j=%d\n",j);
     // printf("j=%d\n",j);
  }


    return 0;
}
