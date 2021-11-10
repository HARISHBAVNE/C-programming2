//Q4. Accept N numbers from user and accept Range, Display all elements from
// that range
// Input : N : 6
// Start: 60
// End : 90
// Elements : 85 66 3 76 93 88
// Output : 85 66 76 88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return;
	}
	int i = 0;
	for (i = 0;i < iLength;i++)
	{
		if ((Arr[i] > iStart)&&(Arr[i] < iEnd))
		{
			printf("%d ",Arr[i]);
		}
	}
}

int main()
{
	int *p = NULL;
	int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
	
	printf("Enter the Number of Elements:\n");
	scanf("%d",&iSize);
	
	printf("Enter the Starting point:");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending point:");
	scanf("%d",&iValue2);
	
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
	Range(p,iSize,iValue1,iValue2);
	
	free(p);
	return 0;
}