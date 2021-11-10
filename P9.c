/*
    0 to 35         Fail
    35 to 50       Pass class
    50 to 60       Second class
    60 to 70       Fisrt class
    70 to 100     Distinction
 */

# include<stdio.h>
#include<stdbool.h>
void CheckDivisible(int marks)
{
	if ((marks < 0) || (marks > 100))
	{
		printf("Invalid marks.");
		return;
	}
	if ((marks >= 0) && (marks < 35))
	{
		printf("Fail");
	}
	if ((marks >= 35) && (marks < 50))
	{
		printf("Pass class");
	}
	if ((marks >= 50) && (marks < 60))
	{
		printf("Second class");
	}
	if ((marks >= 60) && (marks < 70))
	{
		printf("First class");
	}
	if ((marks >= 70) && (marks <= 100))
	{
		printf("Distinction");
	}
}
int main()
{
	auto int marks = 0;
	

	printf("Enter a marks:\n");
	scanf(" %d",&marks);
	
	CheckDivisible(marks);				// function call
	
	return 0;
}

