/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //declare veriables
  int marks1 ,marks2,total;
  float average;
//input veriables and asign
  printf("enter the marks1 :");
  scanf("%d",&marks1);
  printf("enter the marks2 :");
  scanf("%d",&marks2);

//calculate the average
  total = marks1 + marks2;
  average = total / 2.0;
  
//print average
  printf("this is the average marks of student = %.2f",average);

  
  return 0;
}

