#include<stdio.h>


int binary_search (int arr [],int low,int end, int target)
{
    if (low==end)
    {
        if (arr[low]==target)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    
    int mid = (low+end)/2;
    
    
    if (arr[mid]==target)
    {
        return mid;
    }
    else
    {
        if (arr[mid]>target)
        {
            binary_search(arr,low,(mid-1),target);
        }
        else
        {
            binary_search(arr,(mid+1),end,target);
        }
    }
}

int main()
{
    int arr[] = {1,3,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf ("enter the valu of search:\n");
    scanf ("%d",&target);
    
    int ans = binary_search(arr,0,len,target);
    
    if (ans==-1)
    {
        printf("ther is not found \n");
    }
    else
    {
        printf("found it intex is:%d\n",ans);
    }
    
    return 0;
}
