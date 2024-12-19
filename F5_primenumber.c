 #include <stdio.h>
 #include <stdbool.h>
 #include <math.h>
 
 bool isPrime(int n) {
 if (n <= 1) return false; 
 for (int i = 2; i <= sqrt(n); i++) {
 if (n % i == 0) return false; 
 }
 return true; 
 }
 int main() {
 int low, high;
 
 printf("Enter the lower interval: ");
 scanf("%d", &low);
 printf("Enter the upper interval: ");
 scanf("%d", &high);
 printf("Prime numbers between %d and %d are:\n", low, high);
 
 for (int i = low; i <= high; i++) {
 if (isPrime(i)) {
 printf("%d ", i);
 }
 }
 printf("\n");
 return 0;
 }