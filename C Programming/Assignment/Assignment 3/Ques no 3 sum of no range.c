// Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//Input: start = 1, end = 5 


#include<stdio.h>
int main() {
	int start, end, sum = 0, i;
	printf("Enter Start and End number: ");
	scanf("%d%d", &start, &end);
	
	for(i = start;i <= end; i++) {
		sum = sum + i;
	}
	printf("Sum = %d", sum);
	return 0;
}