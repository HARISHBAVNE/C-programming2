// 4. Accept N numbers from user and display all such numbers which contains
// 3 digits in it.
// Input : N : 6
// Elements : 8225 665 3 76 953 858
// Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
	if ((Arr == NULL)||(iLength < 0))
	{
		return ;
	}
	int i = 0;
	
	for (i = 0;i < iLength;i++)
	{
		if ((Arr[i]>99) && (Arr[i]<1000))
		{
			printf("%d ",Arr[i]);
		}
	}
	
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
	Digits(p,iSize);
	
	free(p);
	return 0;
}