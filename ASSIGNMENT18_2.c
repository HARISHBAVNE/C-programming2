//Q2. Accept N numbers from user and return difference between frequency of
// even number and odd numbers.
// Input : N : 7
// Elements : 85 66 3 80 93 88 90
// Output : 1 (4 -3)
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	if((iLength <= 0)||(Arr == NULL))
	{
		return 1;
	}
	int i = 0;
	int EvenCount = 0,OddCount = 0;
	for (i = 0;i < iLength; i++)
	{
		if ((Arr[i]%2)==0)
		{
			EvenCount ++;
		}
		else
		{
			OddCount ++;
		}
	}
	return ((EvenCount)-(OddCount));
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
	iRet = Frequency(p,iSize);
	printf("Result is:%d",iRet);
	free(p);
	return 0;
}