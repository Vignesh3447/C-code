// quick sort own way pivot is mid value
#include <stdio.h>

void sort(int arr [],int low,int high)
{
    if (low >= high) return; 
    
    int start=low;
    int end=high;
    int mid= (low+high)/2;
    int p=mid;
    
    while(start<=end)
    {
        while(arr[start]<arr[p])
        {
            start++;
        }
        while(arr[end]>arr[p])
        {
            end--;
        }
        if(start<=end)
        {
            int p=arr[start];
            arr[start]=arr[end];
            arr[end]=p;
            
            start++;
            end--;
        }
        
    }
    sort(arr,low,end);
    sort(arr,start,high);
}

void print_array(int arr[],int l)
{
    for(int i=0; i<l; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main ()
{
    int arr[]={8,7,2,11,0,9,6};
    int a_size= sizeof(arr)/sizeof(arr[0]);
    printf("unsorted arr:\n");
    print_array(arr,a_size);
    
    sort(arr,0,(a_size-1));
    
    printf("sorted array:\n");
    print_array(arr,a_size);
    return 0;
}