
#include<stdio.h>

int main()
{
    int n,fact=1;
    printf("enter your factorial range:\n");
    scanf("%d",&n);
    
    if (n<0)
    {
        printf("invalide input try agin \n");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact *=i;
        }
        printf("%d",fact);
    }
    return 0;
}