//Q1. Accept N numbers from user and return frequency of even numbers.
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	if((iLength <= 0)||(Arr == NULL))
	{
		return 1;
	}
	int i = 0;
	int iCount = 0;
	for (i = 0;i < iLength; i++)
	{
		if ((Arr[i]%2)==0)
		{
			iCount ++;
		}
	}
	return iCount;
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iRet = 0;
	
	printf("Enter the number of Elements");
	scanf("%d",&iSize);
	
	p = (int *)(malloc(iSize * sizeof(int)));
	
	printf("Enter %d Elements\n",iSize);
	
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
	iRet = CountEven(p,iSize);
	printf("Result is:%d",iRet);
	free(p);
	return 0;
}