#include <stdio.h>

int main() {
int a = 9;
char b = 'A';
float c = 3.14f;
double d = 3.141592653589793;
void *ptr = &a;

printf("Integer: %d\n", a);      
printf("Character: %c\n", b);
printf("Float: %f\n", c);
printf("Double: %lf\n", d);
printf("Void pointer: %d\n", *(int*)ptr);

return 0;
}