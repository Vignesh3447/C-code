#include<stdio.h>

int main()
{
    int arr[2][2]={{1,2},3,4};
    int len=sizeof(arr)/sizeof(arr[0]);

    int *p;
    int *q[len];
    for (int i=0; i<len; i++)
    {
        q[i]=&arr[i];
    }

    for (int i=0; i<len; i++)
    {
        printf("%u\n",q[i]);
        printf("%d \n",*q[i]);
    }

    

    return 0;
}