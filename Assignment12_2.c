// 2. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output : A B C D
		 // a b c d
		 // A B C D
		 // a b c d		 
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i = 0,j = 0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		char CH = 'A';
		char ch = 'a';
		for(j=1;j<=iCol;j++)
		{
			if ((i%2)== 0)
			{
				printf("%c\t",ch);
				ch ++;
			}
			else
			{
				printf("%c\t",CH);
				CH ++;
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows:");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns:");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
