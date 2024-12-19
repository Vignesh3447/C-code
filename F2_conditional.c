 #include <stdio.h>
 int main() 
{
 int choice;

 printf("Select an option:\n");
 printf("1. Check if a number is odd or even\n");
 printf("2. Calculate the square of a number\n");
 printf("3. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) 
{
 case 1: 
{
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num % 2 ==0)
 printf("The number %d is even.\n", num);
 else
 printf("The number %d is odd.\n", num);
 break;
}
 case 2:
{
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 printf("The square of %d is %d.\n", num, num * num);
 break;
}
 case 3:
 printf("Exiting the program.\n");
 break;
 default:
 printf("Invalid choice! Please select a valid option.\n");
}
 return 0;
}
