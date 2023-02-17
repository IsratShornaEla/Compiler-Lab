#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Keep taking input untill gets a @ in string:\n");
    scanf("%[^@]",str);
    printf("\noutput:\n%s",str);
    return 0;
}
