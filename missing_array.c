#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int n;

    for (int i=0; i<len; i++)
    {
        n=(arr[i=1]-arr[i]);
        for (int j=1; j<n; j++)
        {
            printf("%d \n",arr[i]+j);
        }

    }
    return 0;
}