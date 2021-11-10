//Q3. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 6 iCol = 6
// Output : * * * *  *  *
// 			*        *  *
// 			*      *    *
// 			*    *      *
// 			*  *        *
// 			*  *  * * * *

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0, j = 0;
	if (iRow != iCol)
	{return;}
	printf("\n");
	for (i = iRow;i>0;i--)
	{
		for (j = 1;j <= iCol;j++)
		{
			if (i==j)
			{
				printf("*\t");
			}
			else if ((i==1)||(i==iRow)||(j==iCol)||(j==1))
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows:");
	scanf("%u",&iValue1);
	
	printf("Enter number of columns:");
	scanf("%u",&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
