/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>

int main()     //Beginning of the main function
{
	int number, sum = 0, i = 1;    //variable declaration
	
	printf("Enter any positive integer : ");    //Get user inputs
	scanf("%d", &number);                       //scan user inputs
	
	while(i <= number)      //While loop to get sum
	{
		sum = sum + i;      //Calculation
		i++;                //Increment i by 1
	}
	
	printf("\nSum of the numbers from 1 to %d is %d", number, sum);   //print sum of the numbers from 1 to number
	
	return 0;
} //End of the main function