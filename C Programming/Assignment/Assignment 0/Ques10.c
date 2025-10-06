//  Write a C program to input marks of five subjects, find the total marks, and calculate 
//the percentage.

#include<stdio.h>
void main(){
int sub1,sub2,sub3,sub4,sub5,totalmarks;
float percentage;

sub1=30;
sub2=35;
sub3=42;
sub4=60;
sub5=70;

totalmarks=sub1+sub2+sub3+sub4+sub5;
percentage=totalmarks/500.0*100;

printf("total marks = %d and percentage =  %f",totalmarks,percentage);
}