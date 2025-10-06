// Write a C program to convert given minutes into hours and remaining minutes. 

#include<stdio.h>
void main(){
	
 int min,hr,hr1;
 min=90;
 hr=min%60;
 
 hr1 = min/60;
 
 printf("time in hr:%d hr and %d min",hr1,hr);
}