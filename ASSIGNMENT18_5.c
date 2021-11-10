//Q5. Accept N numbers from user and accept one another number as NO ,
// return frequency of NO form it.
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : 2
// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : 0

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength,int iNo)
{
	if((iLength <= 0)||(Arr == NULL))
	{
		return 1;
	}
	int i = 0,iCount = 0;
	for (i = 0;i < iLength; i++)
	{
		if (Arr[i]==iNo)
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
	int iNo = 0;
	printf("Enter the number of Elements");
	scanf("%d",&iSize);
	printf("Enter the number\n");
	scanf("%d",&iNo);
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
	iRet = Frequency(p,iSize,iNo);
	printf("%d",iRet);
	
	free(p);
	return 0;
}