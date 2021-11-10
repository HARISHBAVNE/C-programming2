//Q1. Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements.
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	if((iLength <= 0)||(Arr == NULL))
	{
		return 1;
	}
	int i = 0;
	int Even = 0,Odd = 0;
	for (i = 0;i < iLength;i++)
	{
		if ((Arr[i]%2)==0)
		{
			Even = Even + Arr[i] ;
		}
		else
		{
			Odd = Odd + Arr[i] ;
		}
	}
	return ((Even)-(Odd)) ;
}

int main()
{
	int *p = NULL;
	int iCnt = 0,iSize = 0,iRet = 0;
	
	printf("Enter the number of Elements");
	scanf("%d",&iSize);
	
	p = (int *)(malloc(iSize * sizeof(int)));
	printf("Enter the %d elements\n",iSize);
	
	if (p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	for (iCnt = 0;iCnt < iSize;iCnt++)
	{
		printf("Element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p,iSize);
	printf("Result is %d:",iRet);
	
	free(p);
	return 0;
}