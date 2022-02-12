/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main(void)            //beginning of the main function                                
{
	float mark1, mark2, sum, average;       //variable declaration
	
	printf("Enter marks for subject-1 : ");  //Get user inputs
	scanf("%f", &mark1);                     //scan user inputs
	
	printf("Enter marks for subject-2 : ");
	scanf("%f", &mark2);
	
	sum = mark1 + mark2;           //Calculations
	average = sum / 2.0;

	printf("\nAverage of the two marks is %.2f", average);	 //print average of the two marks
	
	return 0;       //End of the main function
}