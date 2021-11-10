// Accept number from user and display all the numbers till that number.
// Input : 8
// Output : 1   2   3   4   5   6   7   8

// Input : -6
// Output : 1   2   3   4   5   6
# include<stdio.h>

void Display(int no)
{
	int i = 0;
	if (no < 0)
	{
		no = -(no);
	}


	for (i = 1;i<=no;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	auto int no = 0;


	printf("Enter a number:\n");
	scanf(" %d",&no);
	
	
	Display(no);				// function call
	   
	
	return 0;
}

