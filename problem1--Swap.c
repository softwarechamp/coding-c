#include<stdio.h>
main()
{  
  float num1,num2,num1_2,num2_1;
printf("enter 2 numbers in the following format\n--> first number,second number\n");
scanf("%f,%f",&num1,&num2);

num1_2=num2;
num2_1=num1;

printf("\n%4.2f,%4.2f",num1_2,num2_1);
}
