// 1. Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : TRUE
// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : FALSE
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Check(int Arr[],int iLength,int iNo)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return 1;
	}
	int i = 0;
	for (i = 0;i < iLength;i++)
	{
		if (Arr[i] == iNo)
		{
			break;
		}
	}
	if (i == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iNo = 0,iRet = true;
	
	printf("Enter the Number of Elements:\n");
	scanf("%d",&iSize);
	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	p = (int *)(malloc(iSize * sizeof(int)));
	printf("Enter %d Element\n",iSize);
	if (p == NULL)
	{
		printf("Unable to alocate memory\n");
		return -1;
	}
	for (iCnt = 0;iCnt < iSize;iCnt++)
	{
		printf("Enter element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Check(p,iSize,iNo);
	if (iRet==true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	free(p);
	return 0;
}