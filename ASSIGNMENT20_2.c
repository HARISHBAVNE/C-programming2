// 2. Accept N numbers from user and return the smallest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return 1;
	}
	int i = 0,iMin = 0;
	iMin = Arr[0];
	for (i = 0;i < iLength;i++)
	{
		if (Arr[i]<iMin)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
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
	iRet = Minimum(p,iSize);
	
	printf("Smallest Number is: %d",iRet);
	
	free(p);
	return 0;
}