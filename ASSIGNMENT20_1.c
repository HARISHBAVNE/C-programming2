// 1. Accept N numbers from user and return the largest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return 1;
	}
	int i = 0,iMax = 0;
	iMax = Arr[0];
	for (i = 0;i < iLength;i++)
	{
		if (Arr[i]>iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
}


int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iRet = 0;
	
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
	iRet = Maximum(p,iSize);
	
	printf("Largest Number is: %d",iRet);
	
	free(p);
	return 0;
}