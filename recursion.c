#include<stdio.h>

int sum(int a)
{
    if (a==1)
    {
        return 1;
    }
    int ans;
    printf("%d",a);
    ans = sum(a-1);
    printf("\n");
    printf("%d",a);
}
int main()
{
    int a = 5;
       sum (a);
    return 0;

}