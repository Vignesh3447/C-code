#include<stdio.h>

int main()
{
    int n,arr[]={1,2,3,4,5,7,8,9,10};

    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        n=(arr[i=1]-arr[i]);
        for (int j=1; j<n; j++)
        {
            printf("%d \n",arr[i]+j);
        }



    }

    return 0;
}