#include<stdio.h>

int main()
{
    int a=10;
    char b='c';

    int *p=&a;
    int **w=&p;
    char *q=&b;

    printf("%p \n",&a);
    printf("%p \n",p);
    printf("%d \n",*p);
    printf("%p \n",&p);
    printf("%p \n",w);
    printf("%d \n",**w);
    printf("%p \n",q);
    printf("%c \n",*q);

    return 0;

}