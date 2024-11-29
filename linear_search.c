#include<stdio.h>

int search(int arr[],int len,int find)
{
    int k=-1;

    for (int i=0; i<len; i++)
    {
        if (arr[i]==find)
        {
            return k=i;
            break;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf ("enter the valu of search:\n");
    scanf ("%d",&target);
    
    int ans = search(arr,len,target);
    
    if (ans!=-1)
    {
        printf("found it intex is:%d\n",ans);
    }
    else
    {
        printf("not found\n");
    }
    
    return 0;
}
