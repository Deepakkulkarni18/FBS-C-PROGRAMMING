//Write a C program to input five numbers and find their average.


#include<stdio.h>
void main(){
int num1;
    printf("Enter the first number: ");
    
    int num2;
    printf("Enter the second number: ");
    
    int num3;
    printf("Enter the third number: ");
    
    int num4;
    printf("Enter the fourth number: ");
    
    int num5;
    printf("Enter the fivth number: ");
    
    int add = num1 + num2 + num3 + num4 + num5;
    int avg = add/5;
    printf("The Avearge of five input number is: %d\n",avg);
}

