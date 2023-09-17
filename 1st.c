#include<stdio.h>

int main()

{

   int num1 = 10, num2 = 20;

   int *const ptr = &num1;

   printf("\n%d",*ptr);

   ptr = &num2;

   printf("%d\n", *ptr);



}