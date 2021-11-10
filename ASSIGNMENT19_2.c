//Q2. Accept N numbers from user and accept one another number as NO ,
// return index of first occurrence of that NO.
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : 1
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
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
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iNo = 0,iRet = 0;
	
	printf("Enter the Number of Elements:\n");
	scanf("%d",&iSize);
	
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
	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	iRet = FirstOcc(p,iSize,iNo);
	if (iRet == -1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("First occurrence of number is %d",iRet);
	}
	free(p);
	return 0;
}