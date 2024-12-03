#include<stdio.h>

int main ()
{
    int a[]={1,3,5,10,20};
    int k=a[0];

    int len=sizeof(a)/sizeof(a[0]);

    for (int i=0; i<len; i++)
    {
        int n=(a[i+1]-a[i]);
        for(int j=1; j<n; j++)
        {
            printf("%d \n",a[i]+j);

        }
    }

    return 0;
}