/*
// Accept number from user and display its table
// Input 4
// Output : 4   8   12  16  20  24  28  32  36  40

// Input : 5
// Output : 5   10  15  20  25  30  35  40  45  50
*/

# include<stdio.h>
#include<stdbool.h>
void Table(int no)
{
	int i = 0;
	if (no < 0)
	{
		no = -(no);
	}
	for (i = 1;i<=10;i++)
	{
		printf("%d\n",no*i);
	}
}
int main()
{
	auto int no = 0;
	

	printf("Enter a number:\n");
	scanf(" %d",&no);
	
	Table(no);				// function call
	
	return 0;
}

