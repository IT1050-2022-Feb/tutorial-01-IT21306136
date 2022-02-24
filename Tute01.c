/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
   float sum,avg=0;
   printf("Enter Mark 1:");
   scanf("%d",&m1);
   printf("Enter Mark 2:");
   scanf("%d",&m2);
   
   sum = m1+m2;
   printf("sum :%f\n",sum);
   avg = sum/2.0;
   printf("Avg :%.2f\n",avg);
   
   
  return 0;
}

