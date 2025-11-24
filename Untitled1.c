#include<stdio.h>
int main(void) 
{
	//Write a program that takes one floating-point number, converts it to an integer number, 
	//and then prints a description of the given number. Descriptions for numbers

	float gradeAverage;
	int finalGrade;

	scanf("%f", &gradeAverage);
	finalGrade = (int)gradeAverage;
	if (finalGrade == 1)
		puts("Very bad");
	if (finalGrade == 2)
		puts("Bad");
	if (finalGrade == 3);
}
	
