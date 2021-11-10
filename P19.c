// Accept number from user and display the digits of that numbers separately in reverse order
// Input : 7521
// Output :         1
//                      2
//                      5
//                      7

# include<stdio.h>
# include<stdbool.h>

void Display(int no)
{
	if (no < 0)
	{
		no = -no;
	}
	while(no != 0)
	{
		printf("%d\t",no%10);
		no = no/10;
	}
}

int main()
{
	auto int no = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&no);
	
	Display(no);
	
	return 0;
}