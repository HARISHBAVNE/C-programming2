// 5. Accept N numbers from user and display summation of digits of each
// number.
// Input : N : 6
// Elements : 8225 665 3 76 953 858
// Output : 17 17 3 13 17 21

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
		int iSum = 0,iDigit = 0;
		while (Arr[i] > 0)
		{
			iDigit = Arr[i]%10;
			iSum = iSum + iDigit;
			Arr[i] = Arr[i]/10;
		}
		printf("%d ",iSum);
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