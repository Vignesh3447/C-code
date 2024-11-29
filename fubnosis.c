
#include<stdio.h>

int main()
{
    int n,a=0,b=1,c;
    printf("enter your fubons range:\n");
    scanf("%d",&n);
    
    if (n<0)
    {
        printf("invalide input try agin \n");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            printf("%d",a);
            c=a+b;
            b=a;
            a=c;
        }
    }
    return 0;
}