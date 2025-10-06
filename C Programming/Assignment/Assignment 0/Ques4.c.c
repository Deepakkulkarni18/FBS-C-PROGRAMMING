//Write a C program to swap two numbers using a temporary third variable.


#include<stdio.h>
int main (){
int e = 10;                     
	int d = 5;
	int a1 = d*e/e;
	int b1 = e*d/d;
	printf("The swap values are: e = %d and d = %d\n",a1,b1);
	
	int a2 = 22;      // By using third temperory variable.
    int b2 = 55;
    int temp;

    temp = a2;
    a2 = b2;
    b2 = temp;

    printf("The swapped values are: a2 = %d and b2 = %d\n", a2, b2);
    
}